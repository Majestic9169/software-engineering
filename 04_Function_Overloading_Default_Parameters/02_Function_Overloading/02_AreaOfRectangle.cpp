#include <iostream>
using namespace std;

int Area(int a, int b) { return a * b; }
double Area(double c) { return c * c; }

int main() {
  int x = 10, y = 12;
  double z = 3.2;

  cout << "Area of Rectangle = " << Area(x, y) << endl;
  cout << "Area of Rectangle = " << Area(z) << endl;
}

/*
 * different types
 * different number of parameters
 * binding happens at compile time
 *
 */
