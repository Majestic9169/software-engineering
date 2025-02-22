// PitfallsInReference.cpp
#include <iostream>
using namespace std;

int main() {
  int i = 2;
  int &j = i;
  const int &k = 5; // const tells compiler to allocated a memory with value 5
  const int &l = j + k; // similariy for j + k = 7 for l to refer to

  cout << i << ", " << &i << endl;
  cout << j << ", " << &j << endl;
  cout << k << ", " << &k << endl;
  cout << l << ", " << &l << endl;

  return 0;
}
