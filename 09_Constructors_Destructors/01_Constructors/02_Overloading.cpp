#include <iostream>
using namespace std;

class Pt {
public:
  int x_, y_;
  Pt(int x, int y) : x_(x), y_(y) {}
}; // A Point

class Rect {
// by default class attributes are private
  Pt LT_, RB_;

public:
  Rect(Pt lt, Pt rb) : LT_(lt), RB_(rb) {} // Cons 1: Points Left-Top lt and Right-Bottom rb
  Rect(Pt lt, int h, int w) : LT_(lt), RB_(Pt(lt.x_ + w, lt.y_ + h)) {} // Cons 2: Point Left-Top lt, height h & width w
  Rect(int h, int w) : LT_(Pt(0, 0)), RB_(Pt(w, h)) {} // Cons 3: height h, width w & Point origin as Left-Top
  int area() { return (RB_.x_ - LT_.x_) * (RB_.y_ - LT_.y_); }
};

int main() {
  Pt p1(2, 5), p2(8, 10);
  Rect r1(p1, p2),  // Cons 1: Rect::Rect(Pt, Pt)
      r2(p1, 5, 6), // Cons 2: Rect::Rect(Pt, int, int)
      r3(5, 6);     // Cons 3: Rect::Rect(int, int)
  cout << "Area of r1 = " << r1.area() << endl;
  cout << "Area of r2 = " << r2.area() << endl;
  cout << "Area of r3 = " << r3.area() << endl;
}
