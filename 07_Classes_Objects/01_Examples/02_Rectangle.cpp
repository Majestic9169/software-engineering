// Rectangle.cpp
#include <cstdlib>
#include <iostream>
using namespace std;

class Point {
public:
  int x, y;
};

class Rect {
public:
  Point TL, BR;

  void computeArea() {
    double area = abs(TL.x - BR.x) * abs(TL.y - BR.y);
    std::cout << area << endl;
  }
};

int main() {
  Rect r = {{0, 2}, {5, 7}};
  r.computeArea();
  return 0;
}
