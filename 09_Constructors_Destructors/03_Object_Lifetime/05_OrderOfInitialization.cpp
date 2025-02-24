#include <iostream>
using namespace std;

int init_m1(int m) {
  cout << "Init m1_: " << m << endl;
  return m;
}

int init_m2(int m) {
  cout << "Init m2_: " << m << endl;
  return m;
}

class X1 {
private:
  int m1_;
  int m2_;

public:
  X1(int m1, int m2) : m2_(init_m2(m2)), m1_(init_m1(m1)) {
    cout << "Constructor for X1" << endl;
  }
  ~X1() {
    cout << "Destructor for X1";
    cout << endl;
  }
};

class X2 {
private:
  int m2_;
  int m1_;

public:
  X2(int m1, int m2) : m1_(init_m1(m1)), m2_(init_m2(m2)) {
    cout << "Constructor for X2";
    cout << endl;
  }
  ~X2() {
    cout << "Destructor for X2";
    cout << endl;
  }
};

int main() {
  X1 a(2, 3);
  X2 b(2, 3);

  return 0;
}
