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
