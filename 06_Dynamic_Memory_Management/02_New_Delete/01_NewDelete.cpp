// NewDelete.cpp
#include <iostream>

using namespace std;

int main() {
  int *p = new int(5);
  cout << *p << endl;
  delete p;
  return 0;
}

/*
 * operator new for allocation on heap
 * No size specification necessary, type is sufficient
 * allocated memory returned as int*
 * no casting necessary
 * can be initiliazed directly
 * operator delete for deallocation from heap
 * core language feature, no header needed
 */
