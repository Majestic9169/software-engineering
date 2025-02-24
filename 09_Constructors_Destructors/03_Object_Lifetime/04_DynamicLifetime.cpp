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
