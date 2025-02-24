#include <cmath>
#include <iostream>
using namespace std;

class Complex {
private:
  double re_, im_;

public:
  Complex() : re_(0.0), im_(0.0) {
    cout << "Ctor: (" << re_ << ", " << im_ << ")" << endl;
  }
  ~Complex() { cout << "Dtor: (" << re_ << ", " << im_ << ")" << endl; }

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
  Complex c;
  c.print();
  c.set(4.2, 5.3);
  c.print();
}

/*
 * user has provided a default destructor
 */
