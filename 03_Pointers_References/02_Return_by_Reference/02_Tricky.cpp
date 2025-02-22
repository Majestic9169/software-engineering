#include <iostream>
using namespace std;

int &Return_ref(int &x) {
  int t = x;
  t++;
  return t;
}

int main() {
  int a = 10;
  int b = Return_ref(a);
  cout << "a = " << a << " and b = " << b << endl;

  Return_ref(a) = 3; // Changes local t
  cout << "a = " << a << endl;
}

/*
 * We expect a to be 3 but it has not changed
 * It returns reference to local, this is risky
 */
