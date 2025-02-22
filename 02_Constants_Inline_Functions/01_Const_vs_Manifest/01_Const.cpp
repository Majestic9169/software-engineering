#include <cmath>
#include <iostream>
using namespace std;

const int TWO = 2;
const double PI = 4.0 * atan(1.0);

int main() {
  int r = 10;
  double peri = TWO * PI * r;
  cout << "Perimeter = " << peri << endl;

  return 0;
}

/*
 * TWO is a const variable initialized to 2
 * PI is a const variable initialized to 4.0*atan(1.0)
 * TWO and PI are variables
 * Type of TWO is const int
 * Type of PI is const double
 */
