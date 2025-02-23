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
