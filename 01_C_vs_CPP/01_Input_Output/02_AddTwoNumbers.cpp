// AddTwoNumbers.cpp
#include <iostream>

int main() {
  int a, b;

  std::cout << "Input two numbers: " << std::endl;
  // std::cin >> a >> b;
  a = 3;
  b = 4;

  int sum = a + b;

  std::cout << "Sum of " << a << " and " << b << " is: " << sum << std::endl;
  return 0;
}

/*
 * operator>> to stream from console
 * consolge is std::cin istream (in std namespace)
 * operator>> is a binary operator
 * a and b can be directly used in operator>>
 * sum may be declared when needed. Allowed from C89 too
 * Formatting is derived from type (int) of variables
 */
