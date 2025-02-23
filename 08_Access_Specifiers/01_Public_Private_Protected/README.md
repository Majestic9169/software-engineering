
## Source Code and Compilation

### 01_ComplexNumbers.cpp

#### Source Code:
```cpp
// ComplexNumbers.cpp
#include <cmath>
#include <iostream>

class Complex {
private:
  double re, im;

  double norm() { return sqrt(re * re + im * im); }

public:
  Complex(double re_, double im_) : re(re_), im(im_) {}

  void print() { std::cout << "| " << re << " + j" << im << " | = " << norm(); }
};

int main() {
  Complex c = {4.2, 5.3};
  c.print();
  std::cout << std::endl;
  return 0;
}

```
#### Compilation Command:
```sh
g++ 01_ComplexNumbers.cpp -o 01_ComplexNumbers.out
```
#### Output:
```
| 4.2 + j5.3 | = 6.7624
```
### 02_Stack.cpp

#### Source Code:
```cpp
// Stack.cpp
#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
  vector<char> data_;
  int top_;

public:
  Stack() : top_(-1), data_(100, 0) {}
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
 * private data hides the inernals of the stack (information hiding)
 * Data structure codes contained within itself with initialization and
 * deinitialization to switch from array to vector or vice versa with
 * application needs no change application can not tamper stack - any direct
 * access to top_ or data_ is compilation error
 */

```
#### Compilation Command:
```sh
g++ 02_Stack.cpp -o 02_Stack.out
```
#### Output:
```
Reversed String: EDCBA
```
### 03_Interface.cpp

#### Source Code:
```cpp
#include "03_Interface.h"
#include <iostream>
using namespace std;

Stack::Stack() : data_(new char[100]), top_(-1) {}
Stack::~Stack() { delete[] data_; }

bool Stack::empty() { return (top_ == -1); }
void Stack::push(char x) { data_[++top_] = x; }
void Stack::pop() { --top_; }
char Stack::top() { return data_[top_]; }

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

```
#### Compilation Command:
```sh
g++ 03_Interface.cpp -o 03_Interface.out
```
#### Output:
```
Reversed String: EDCBA
```