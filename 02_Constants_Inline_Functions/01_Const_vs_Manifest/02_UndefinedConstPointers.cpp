#include <iostream>
using namespace std;

int main() {
  const int a = 5;
  int *b;
  b = (int *)&a;
  *b = 10;
  cout << a << " " << b << " " << &a << " " << *b << endl;

  return 0;
}

/*
 * b actually points to a
 * But when accesses through a the compiler substitutes the constant experssion.
 * This behaviour is undefind
 */
