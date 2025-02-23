// OperatorNewDelete.cpp
#include <iostream>
using namespace std;

int main() {
  int *p = static_cast<int *>(operator new(sizeof(int)));
  *p = 5;

  cout << *p << endl;
  operator delete(p);

  return 0;
}

/*
 * operator new() is the C++ equivalent of malloc()
 * it functions similarily by taking the size in bytes and returning void*
 * new() is called the new operator instead
 * under the hood the new operator calls operator new to allocate memory, it
 * also calls the required constructor and initliazes the memory
 */
