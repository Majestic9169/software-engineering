#include "04_Restriction-2.h"
#include <iostream>
using namespace std;

void g(int i, double d, char c) { cout << i << ' ' << d << ' ' << c << endl; }

int main() {
  int i = 5;
  double d = 1.2;
  char c = 'b';
  g();
  g(i);
  g(i, d);
  g(i, d, c);
}
