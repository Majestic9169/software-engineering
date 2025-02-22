// ArbitrarySizeArray_Dynamic.cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cout << "Enter the number of elements: " << endl;
  int count, sum = 0;
  // cin >> count;
  count = 10;

  vector<int> arr;
  arr.resize(count);
  for (int i = 0; i < arr.size(); i++) {
    arr[i] = i;
    sum += arr[i];
  }
  cout << "Array Sum: " << sum << endl;

  return 0;
}

/*
 * resize fixes vecetor size at run time
 */
