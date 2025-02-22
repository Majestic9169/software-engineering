#include <iostream>
using namespace std;

#define SQUARE_BAD(x) x *x
#define SQUARE_BETTER(x) (x) * (x)

int main() {
  int a = 3, b, c, d;

  b = SQUARE_BAD(a);
  cout << "Square = " << b << endl;

  c = SQUARE_BAD(a + 1);
  cout << "Square = " << c << endl;

  d = SQUARE_BETTER(++a);
  cout << "Square = " << d << endl;

  return 0;
}

/*
 * SQUARE(x) is a macro with one param
 * Macro SQUARE(x) is efficient
 * SQUARE(a+1) fails
 * SQUARE(++a) fails
 * SQUARE(++a) does not check type
 */
