
## Source Code and Compilation

### 01_ComplexNumbers.cpp

#### Source Code:
```cpp
// ComplexNumbers.cpp
#include <cmath>
#include <iostream>

class Complex {
public:
  double re, im;

  double norm() { return sqrt(re * re + im * im); }

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
### 02_Rectangle.cpp

#### Source Code:
```cpp
// Rectangle.cpp
#include <cstdlib>
#include <iostream>
using namespace std;

class Point {
public:
  int x, y;
};

class Rect {
public:
  Point TL, BR;

  void computeArea() {
    double area = abs(TL.x - BR.x) * abs(TL.y - BR.y);
    std::cout << area << endl;
  }
};

int main() {
  Rect r = {{0, 2}, {5, 7}};
  r.computeArea();
  return 0;
}

```
#### Compilation Command:
```sh
g++ 02_Rectangle.cpp -o 02_Rectangle.out
```
#### Output:
```
25
```
### 03_Stack.cpp

#### Source Code:
```cpp
// Stack.cpp
#include <iostream>
using namespace std;

class Stack {
public:
  char data_[100];
  int top_;

  bool empty() { return top_ == -1; }
  char top() { return data_[top_]; }
  void push(char x) { data_[++top_] = x; }
  void pop() { --top_; }
};

int main() {
  Stack s;
  s.top_ = -1;
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
g++ 03_Stack.cpp -o 03_Stack.out
```
#### Output:
```
Reversed String: EDCBA
```
### 04_thisPointer.cpp

#### Source Code:
```cpp
#include <iostream>
using namespace std;

class X {
public:
  int m1, m2;

  void f(int k1, int k2) {
    m1 = k1;
    this->m2 = k2;
    cout << "Id =  " << this << endl;
  }
};

int main() {
  X a;
  a.f(2, 3);
  cout << "Addr = " << &a << endl;
  cout << "a.m1 = " << a.m1 << " a.m2 = " << a.m2 << endl;

  return 0;
}

```
#### Compilation Command:
```sh
g++ 04_thisPointer.cpp -o 04_thisPointer.out
```
#### Output:
```
Id =  0x7ffc22af4b70
Addr = 0x7ffc22af4b70
a.m1 = 2 a.m2 = 3
```