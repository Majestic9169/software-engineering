// Behaviour.cpp
#include <iostream>
using namespace std;

int main() {
  int a = 10;
  int &b = a; // b is a reference of a

  // a and b have the same memory location
  cout << "a = " << a << ", b = " << b << ". " << "&a = " << &a
       << ", &b = " << &b << endl;

  ++a; // Changing a appears as change in b
  cout << "a = " << a << ", b = " << b << endl;

  ++b; // Changing b also changes a
  cout << "a = " << a << ", b = " << b << endl;

  return 0;
}

/*
 * a and b have the same memory location and hence the same value
 * Changing one changes the other and vice versa
 */
