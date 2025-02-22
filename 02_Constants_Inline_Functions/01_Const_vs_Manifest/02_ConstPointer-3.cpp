#include <cstring>
#include <iostream>

int main() {
  char *str = strdup("IIT, Kharagpur");
  str[0] = 'N';
  std::cout << str << std::endl;
  str = strdup("JIT, Kharagpur");
  std::cout << str << std::endl;

  const char *str1 = strdup("IIT, Kharagpur");
  // str1[0] = 'N'; // ERROR
  std::cout << str1 << std::endl;
  str = strdup("JIT, Kharagpur");
  std::cout << str1 << std::endl;

  char *const str2 = strdup("IIT, Kharagpur");
  str2[0] = 'N';
  std::cout << str2 << std::endl;
  // str2 = strdup("JIT, Kharagpur"); // ERROR
  // std::cout << str2 << std::endl;

  const char *const str3 = strdup("IIT, Kharagpur");
  // str3[0] = 'N'; // ERROR
  // std::cout << str3 << std::endl;
  // str3 = strdup("JIT, Khraragpur"); // ERROR
  // std::cout << str3 << std::endl;

  return 0;
}
