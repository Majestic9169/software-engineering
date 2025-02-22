// Sort.cpp
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(int i, int j) { 
  return (i > j); 
}

int main() {
  int data[] = {32, 71, 12, 45, 26};

  sort(data, data + 5, compare);

  for (int i = 0; i < 5; i++)
    cout << data[i] << " ";

  cout << endl;
  return 0;
}

/*
 * Only compare passed to sort. No size is needed
 * Only Size is inferred from the type int of data
 * Compare function is type safe and simple with no casting
 */
