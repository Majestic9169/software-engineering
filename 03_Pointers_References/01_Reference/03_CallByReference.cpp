// CallByReference.cpp
#include <iostream>
using namespace std;

void Function_under_param_test(int &, int);

int main() {
  int a = 20;
  cout << "a = " << a << ", &a = " << &a << endl;
  Function_under_param_test(a, a);
}

void Function_under_param_test(int &b, int c) {
  cout << "b = " << b << ", &b = " << &b << endl;
  cout << "c = " << c << ", &c = " << &c << endl;
}

/*
 * Param b is call by reference while param c is call by value
 *
 */
