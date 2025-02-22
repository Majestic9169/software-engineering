// DefaultParameters.cpp
#include <iostream>
using namespace std;

int Add(int a = 10, int b = 20) { return a + b; }

int main() {
  int x = 5, y = 6, z;
  z = Add(x, y);
  cout << "Sum = " << z << endl;

  z = Add(x);
  cout << "Sum = " << z << endl;

  z = Add();
  cout << "Sum = " << z << endl;

  return 0;
}
