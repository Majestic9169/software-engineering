// BubbleSort.cpp
#include <iostream>
using namespace std;

int main() {
  int data[] = {32, 71, 12, 45, 26};
  int n = 5, temp;

  for (int step = 0; step < n - 1; step++) {
    for (int i = 0; i < n - step - 1; i++) {
      if (data[i] > data[i + 1]) {
        temp = data[i];
        data[i] = data[i + 1];
        data[i + 1] = temp;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << data[i] << " ";
  }

  cout << endl;
  return 0;
}

/*
 * implementation is the same in both C and C++
 */
