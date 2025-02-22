// DefaultParamter.cpp
#include <iostream>
using namespace std;

int IdentifyFunction(int a = 10) { return (a); }

int main() {
  int x = 5, y;
  y = IdentifyFunction(x);
  cout << "y = " << y << endl;

  y = IdentifyFunction();
  cout << "y = " << y << endl;

  return 0;
}
