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
