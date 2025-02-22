// SquareRoot.cpp
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  double x;
  cout << "Input number: " << endl;
  // cin >> x;
  x = 2.0;

  double sqrt_x = sqrt(x);
  cout << "Sq. Root of " << x << " is: " << sqrt_x << endl;
  return 0;
}

/*
 * Math header is cmath (C standard library in C++)
 * Formatting is derived from type (double) of variables
 * sqrt function from cstdlib
 * default precision is 5 (different)
 */
