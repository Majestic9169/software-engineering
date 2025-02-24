#include <cmath>
#include <iostream>
using namespace std;

class Complex {
private:
  double re_, im_;

public:
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
  Complex c; // Free constructor from compiler. Initialization with garbage
  c.print(); // Print initial value - garbage
  c.set(4.2, 5.3); // Set proper components
  c.print();       // Print values set
} // Free destuctor from compiler

/*
 * User has provided no constructor/destructor
 * compiler provides default (free) constructor/destructor
 * compiler provided constructor does nothing - components have garbage values
 * Compiler-provided destructor does nothing
 */
