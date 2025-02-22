// AddStrings.cpp
#include <iostream>
#include <string>

int main() {
  std::string str1 = "HELLO ";
  std::string str2 = "WORLD";

  std::string str = str1 + str2;

  std::cout << str << std::endl;

  return 0;
}

/*
 * Need header string
 * string is a data type in C++ standard library
 * strings are concatenated like addition in int
 * operator= can be used on strings in place of strcpy function in C
 * operator<=, operator<, operator>=, operator> operators can be used on strings
 * in place of strcmp function in C
 */
