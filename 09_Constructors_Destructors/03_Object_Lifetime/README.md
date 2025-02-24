
## Source Code and Compilation

### 01_ObjectLifetime.cpp

#### Source Code:
```cpp
#include <cmath>
#include <iostream>
using namespace std;

class Complex {
private:
  double re_, im_;

public:
  Complex(double re = 0.0, double im = 0.0) : re_(re), im_(im) {
    cout << "Ctor: (" << re_ << ", " << im_ << ")" << endl;
  }

  ~Complex() { cout << "Dtor: (" << re_ << ", " << im_ << ")" << endl; }

  double norm() { return sqrt(re_ * re_ + im_ * im_); }

  void print() {
    cout << "|" << re_ << "+j" << im_ << "| = " << norm() << endl;
  }
};

int main() {
  // Complex::Complex() called -- c, then d -- objects ready
  Complex c(4.2, 5.3), d(2.4);

  c.print(); // Using objects
  d.print();

  return 0;
} // Scope over, objects no more available. Complex::~Complex() called -- d then
  // c in the reverse order!

```
#### Compilation Command:
```sh
g++ 01_ObjectLifetime.cpp -o 01_ObjectLifetime.out
```
#### Output:
```
Ctor: (4.2, 5.3)
Ctor: (2.4, 0)
|4.2+j5.3| = 6.7624
|2.4+j0| = 2.4
Dtor: (2.4, 0)
Dtor: (4.2, 5.3)
```
### 02_ArrayLifetime.cpp

#### Source Code:
```cpp
#include <cmath>
#include <iostream>
using namespace std;

class Complex {
private:
  double re_, im_;

public:
  Complex(double re = 0.0, double im = 0.0) : re_(re), im_(im) {
    cout << "Ctor: (" << re_ << ", " << im_ << ")" << endl;
  }
  ~Complex() { cout << "Dtor: (" << re_ << ", " << im_ << ")" << endl; }

  void opComplex(double i) {
    re_ += i;
    im_ += i;
  } // Some operation with Complex

  double norm() { return sqrt(re_ * re_ + im_ * im_); }

  void print() {
    cout << "|" << re_ << "+j" << im_ << "| = " << norm() << endl;
  }
};

int main() {
  // Default ctor Complex::Complex() called thrice -- c[0], c[1], c[2]
  Complex c[3];
  for (int i = 0; i < 3; ++i) {
    c[i].opComplex(i);
    c[i].print();
  } // Use array
} // Scope over. Complex::~Complex() called thrice -- c[2], c[1], c[0] in the
  // reverse order

```
#### Compilation Command:
```sh
g++ 02_ArrayLifetime.cpp -o 02_ArrayLifetime.out
```
#### Output:
```
Ctor: (0, 0)
Ctor: (0, 0)
Ctor: (0, 0)
|0+j0| = 0
|1+j1| = 1.41421
|2+j2| = 2.82843
Dtor: (2, 2)
Dtor: (1, 1)
Dtor: (0, 0)
```
### 03_StaticLifetime.cpp

#### Source Code:
```cpp
#include <cmath>
#include <iostream>
using namespace std;

class Complex {
private:
  double re_, im_;

public:
  Complex(double re = 0.0, double im = 0.0)
      : re_(re), im_(im) // Ctor
  {
    cout << "Ctor: (" << re_ << ", " << im_ << ")" << endl;
  }
  ~Complex() { cout << "Dtor: (" << re_ << ", " << im_ << ")" << endl; } // Dtor
  double norm() { return sqrt(re_ * re_ + im_ * im_); }
  void print() {
    cout << "|" << re_ << "+j" << im_ << "| = " << norm() << endl;
  }
};

Complex c(4.2, 5.3); // Static (global) object c
// Constructed before main starts. Destructed after main ends

int main() {
  cout << "main() Starts" << endl;
  Complex d(2.4); // Ctor for d
  c.print();      // Use static object
  d.print();      // Use local object
  // Dtor for d
}
// Dtor for c

```
#### Compilation Command:
```sh
g++ 03_StaticLifetime.cpp -o 03_StaticLifetime.out
```
#### Output:
```
Ctor: (4.2, 5.3)
main() Starts
Ctor: (2.4, 0)
|4.2+j5.3| = 6.7624
|2.4+j0| = 2.4
Dtor: (2.4, 0)
Dtor: (4.2, 5.3)
```
### 04_DynamicLifetime.cpp

#### Source Code:
```cpp
#include <cmath>
#include <iostream>
using namespace std;

class Complex {
private:
  double re_, im_;

public:
  Complex(double re = 0.0, double im = 0.0) : re_(re), im_(im) {
    cout << "Constructed " << re_ << ", " << im_;
    cout << endl;
  }

  ~Complex() {
    cout << "Destructed " << re_ << ", " << im_;
    cout << endl;
  }

  double norm() { return sqrt(re_ * re_ + im_ * im_); }
  void print() {
    cout << "|" << re_ << "+j" << im_ << "| = " << norm() << endl;
  }
};

int main() {
  unsigned char buf[100];
  Complex *pc = new Complex(4.2, 5.3);
  Complex *pd = new Complex[2];

  Complex *pe = new (buf) Complex(2.6, 3.9);

  pc->print();
  pd[0].print();
  pd[1].print();
  pe->print();

  delete pc;
  delete[] pd;
  pe->~Complex(); // No delete: explicit call to Destructor. Use with extreme
                  // care.
}

```
#### Compilation Command:
```sh
g++ 04_DynamicLifetime.cpp -o 04_DynamicLifetime.out
```
#### Output:
```
Constructed 4.2, 5.3
Constructed 0, 0
Constructed 0, 0
Constructed 2.6, 3.9
|4.2+j5.3| = 6.7624
|0+j0| = 0
|0+j0| = 0
|2.6+j3.9| = 4.68722
Destructed 4.2, 5.3
Destructed 0, 0
Destructed 0, 0
Destructed 2.6, 3.9
```
### 05_OrderOfInitialization.cpp

#### Source Code:
```cpp
#include <iostream>
using namespace std;

int init_m1(int m) {
  cout << "Init m1_: " << m << endl;
  return m;
}

int init_m2(int m) {
  cout << "Init m2_: " << m << endl;
  return m;
}

class X1 {
private:
  int m1_;
  int m2_;

public:
  X1(int m1, int m2) : m2_(init_m2(m2)), m1_(init_m1(m1)) {
    cout << "Constructor for X1" << endl;
  }
  ~X1() {
    cout << "Destructor for X1";
    cout << endl;
  }
};

class X2 {
private:
  int m2_;
  int m1_;

public:
  X2(int m1, int m2) : m1_(init_m1(m1)), m2_(init_m2(m2)) {
    cout << "Constructor for X2";
    cout << endl;
  }
  ~X2() {
    cout << "Destructor for X2";
    cout << endl;
  }
};

int main() {
  X1 a(2, 3);
  X2 b(2, 3);

  return 0;
}

```
#### Compilation Command:
```sh
g++ 05_OrderOfInitialization.cpp -o 05_OrderOfInitialization.out
```
#### Output:
```
Init m1_: 2
Init m2_: 3
Constructor for X1
Init m2_: 3
Init m1_: 2
Constructor for X2
Destructor for X2
Destructor for X1
```