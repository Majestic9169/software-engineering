#include <cstring>
#include <iostream>
using namespace std;

void *operator new[](size_t os, char setv) {
  cout << "Overloaded operator new[]" << endl;
  void *t = operator new(os);
  memset(t, setv, os);
  return t;
}

void operator delete[](void *ss) {
  cout << "Overloaded operator delete[]" << endl;
  operator delete(ss);
}

int main() {
  char *t = new ('#') char[10];

  cout << "p = " << &t << endl;
  for (int i = 0; i < 10; i++)
    cout << t[i];
  cout << endl;
  delete[] t;

  return 0;
}

/*
 * operator new[] overloaded with initialization
 * the first parameter of overloaded operator new[] must be size_t
 * the return type of overloaded operator new[] must be void*
 * multiple parameters may be used for overloading
 * operator delete[] should not be overloaded (usually) with extra parameters
 */
