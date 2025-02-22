// Define.cpp
#include <cmath>
#include <iostream>

using namespace std;

#define TWO 2
#define PI 4.0 * atan(1)

int main() {
  int r = 10;
  double peri = TWO * PI * r;
  cout << "Perimeter = " << peri << endl;

  return 0;
}

/*
 * TWO is a manifest constant
 * PI is a manifest constant as macro
 * TWO and PI look like variables
 * C Pre Processor replaces the token TWO by 2
 * CPP replaces the TOKEN PI by 4.0*atain(1.0) and evaluates
 * Compiler sees them as constants
 * Types of TWO and PI may be indeterminate
 * TWO * PI = 6.28319 by constant folding of compiler
 */
