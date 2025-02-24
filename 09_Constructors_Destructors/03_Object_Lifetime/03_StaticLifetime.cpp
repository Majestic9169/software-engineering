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
