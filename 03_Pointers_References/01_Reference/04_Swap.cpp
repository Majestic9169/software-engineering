// Swap.cpp
#include <iostream>
using namespace std;

void swap(int &x, int &y) {
  int t;
  t = x;
  x = y;
  y = t;
}

int main() {
  int a = 10, b = 15;
  cout << "a = " << a << " & b = " << b << " to swap" << endl;
  swap(a, b);
  cout << "a = " << a << " & b = " << b << " on swap" << endl;

  return 0;
}
