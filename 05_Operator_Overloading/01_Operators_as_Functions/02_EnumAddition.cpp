// EnumAddition.cpp
#include <iostream>

using namespace std;

enum E {
  C0 = 0,
  C1 = 1,
  C2 = 2,
};

E operator+(const E &a, const E &b) {
  unsigned int uia = a, uib = b;
  unsigned int t = (uia + uib) % 3;
  return (E)t;
}

int main() {
  E a = C1;
  E b = C2;

  int x = -1;
  x = a + b; // Overloaded opeator+ for enum E
  cout << x << endl;
}

/*
 * Result is a valid enum E value
 *
 */
