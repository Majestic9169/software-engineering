
## Source Code and Compilation

### 01_Stack.cpp

#### Source Code:
```cpp
// Stack.cpp
#include <iostream>
using namespace std;

class Stack {
private:
  char *data_;
  int top_;

public:
  Stack() : top_(-1), data_(new char[10]) { cout << "Stack() Called" << endl; }
  ~Stack() {
    delete[] data_;
    cout << "~Stack() called" << endl;
  }
  bool empty() { return top_ == -1; }
  char top() { return data_[top_]; }
  void push(char x) { data_[++top_] = x; }
  void pop() { --top_; }
};

int main() {
  Stack s;
  char str[10] = "ABCDE";

  for (int i = 0; i < 5; i++) {
    s.push(str[i]);
  }

  cout << "Reversed String: ";
  while (!s.empty()) {
    cout << s.top();
    s.pop();
  }
  cout << endl;

  return 0;
}

/*
 * Can de-initialization be a part of scope rules?
 * Yes. Destructor is implicitly called at end of scope.
 */

```
#### Compilation Command:
```sh
g++ 01_Stack.cpp -o 01_Stack.out
```
#### Output:
```
Stack() Called
Reversed String: EDCBA
~Stack() called
```
### 02_DefaultDestructor.cpp

#### Source Code:
```cpp
#include <cmath>
#include <iostream>
using namespace std;

class Complex {
private:
  double re_, im_;

public:
  Complex() : re_(0.0), im_(0.0) {
    cout << "Ctor: (" << re_ << ", " << im_ << ")" << endl;
  }
  ~Complex() { cout << "Dtor: (" << re_ << ", " << im_ << ")" << endl; }

  double norm() { return sqrt(re_ * re_ + im_ * im_); }
  void print() {
    cout << "|" << re_ << "+j" << im_ << "| = " << norm() << endl;
  }
  void set(double re, double im) {
    re_ = re;
    im_ = im;
  }
};

int main() {
  Complex c;
  c.print();
  c.set(4.2, 5.3);
  c.print();
}

/*
 * user has provided a default destructor
 */

```
#### Compilation Command:
```sh
g++ 02_DefaultDestructor.cpp -o 02_DefaultDestructor.out
```
#### Output:
```
Ctor: (0, 0)
|0+j0| = 0
|4.2+j5.3| = 6.7624
Dtor: (4.2, 5.3)
```