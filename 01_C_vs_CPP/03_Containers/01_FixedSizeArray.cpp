// FixedSizeAray.cpp
#include <iostream>

int main() {
  short age[4];
  age[0] = 23;
  age[1] = 34;
  age[2] = 65;
  age[3] = 74;

  std::cout << age[0] << " ";
  std::cout << age[1] << " ";
  std::cout << age[2] << " ";
  std::cout << age[3] << " " << std::endl;

  return 0;
}

/*
 * no difference between arrays in C and C++
 */
