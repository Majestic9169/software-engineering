#include <iostream>
using namespace std;

void *operator new(size_t n) {
  cout << "Overloaded new" << endl;
  void *ptr = operator new(n);
  return ptr;
}

void operator delete(void *p) {
  cout << "Overloaded delete" << endl;
  operator delete(p);
}

int main() {
  int *p = new int;
  *p = 30;
  cout << "The value is :" << *p << endl;
  delete p;
}

/*
 * new operator overloaded
 * The first paramter of overloaded new operator must be size_t
 * The return type of overloaded new operator must be void*
 * the first parameter of overloaded delete operator must be void*
 * more parameters are allowed
 * delete operator should NOT be overloaded (usually) with extra parameters
 */
