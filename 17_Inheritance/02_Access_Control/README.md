
## Source Code and Compilation

### streaming.cpp

#### Source Code:
```cpp
#include <iostream>
using namespace std;

class B {
protected:
  int data_;

public:
  friend ostream &operator<<(ostream &os, const B &b) {
    os << "B Object: ";
    os << b.data_ << endl;
    return os;
  }
  B(int b) : data_(b) { cout << "B Constructor: " << b << endl; }
};

class D : public B {
private:
  int info_;

public:
  friend ostream &operator<<(ostream &os, const D &d) {
    os << "D Object: ";
    os << d.data_ << ' ' << d.info_ << endl;
    return os;
  }
  D(int b, int d) : B(b), info_(d) { cout << "D Constructor: " << d << endl; }
};

int main() {
  B b(0);
  cout << b; // Printed a B object
  D d(1, 2);
  cout << d; // Printed a D object
}

```
#### Compilation Command:
```sh
g++ streaming.cpp -o streaming.out
```
#### Output:
```
B Constructor: 0
B Object: 0
B Constructor: 1
D Constructor: 2
D Object: 1 2
```