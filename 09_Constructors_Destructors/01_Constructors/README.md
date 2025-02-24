
## Source Code and Compilation

### 01_DefaultParams.cpp

#### Source Code:
```cpp
#include <cmath>
#include <iostream>

class Complex {
private:
  double re, im;

public:
  Complex(double re_ = 0.0, double im_ = 0.0) : re(re_), im(im_) {}
  double norm() { return sqrt(re * re + im * im); }
  void print() {
    std::cout << "|" << re << "+j" << im << "| = " << norm() << std::endl;
  }
};

int main() {
  Complex c1(4.2);
  c1.print();
}

```
#### Compilation Command:
```sh
g++ 01_DefaultParams.cpp -o 01_DefaultParams.out
```
#### Output:
```
|4.2+j0| = 4.2
```
### 02_Overloading.cpp

#### Source Code:
```cpp
#include <iostream>
using namespace std;

class Pt {
public:
  int x_, y_;
  Pt(int x, int y) : x_(x), y_(y) {}
}; // A Point

class Rect {
// by default class attributes are private
  Pt LT_, RB_;

public:
  Rect(Pt lt, Pt rb) : LT_(lt), RB_(rb) {} // Cons 1: Points Left-Top lt and Right-Bottom rb
  Rect(Pt lt, int h, int w) : LT_(lt), RB_(Pt(lt.x_ + w, lt.y_ + h)) {} // Cons 2: Point Left-Top lt, height h & width w
  Rect(int h, int w) : LT_(Pt(0, 0)), RB_(Pt(w, h)) {} // Cons 3: height h, width w & Point origin as Left-Top
  int area() { return (RB_.x_ - LT_.x_) * (RB_.y_ - LT_.y_); }
};

int main() {
  Pt p1(2, 5), p2(8, 10);
  Rect r1(p1, p2),  // Cons 1: Rect::Rect(Pt, Pt)
      r2(p1, 5, 6), // Cons 2: Rect::Rect(Pt, int, int)
      r3(5, 6);     // Cons 3: Rect::Rect(int, int)
  cout << "Area of r1 = " << r1.area() << endl;
  cout << "Area of r2 = " << r2.area() << endl;
  cout << "Area of r3 = " << r3.area() << endl;
}

```
#### Compilation Command:
```sh
g++ 02_Overloading.cpp -o 02_Overloading.out
```
#### Output:
```
Area of r1 = 30
Area of r2 = 30
Area of r3 = 30
```