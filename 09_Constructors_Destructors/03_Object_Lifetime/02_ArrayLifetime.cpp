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
