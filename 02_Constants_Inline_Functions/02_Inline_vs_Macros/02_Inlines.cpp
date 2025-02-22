// Inlines.cpp
#include <iostream>
using namespace std;

inline int SQUARE(int x) { return x * x; }

int main() {
  int a = 3, b;
  b = SQUARE(a);
  cout << "Square = " << b << endl;

  return 0;
}

/*
 * SQUARE(x) is a function with one param
 * inline SQUARE(x) is almost as efficient as the equivalent macro
 * SQUARE(a + 1) works
 * SQUARE(++a) works
 * SQUARE(++a) checks type
 */

/*
 * inlineing is a directive, it is not compulsory the function will be inlined
 * other unintended functions may be inlined as well
 * inline functions may not be recursive
 * NOTE: Implement inline functions in header files directly
 */
