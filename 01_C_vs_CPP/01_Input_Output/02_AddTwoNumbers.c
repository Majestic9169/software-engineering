// AddTwoNumbers.c
#include <stdio.h>

int main() {
  int a, b, sum;

  printf("Input two numbers: \n");
  // scanf("%d%d", &a, &b);
  a = 3;
  b = 4;

  sum = a + b;

  printf("Sum of %d and %d is: %d\n", a, b, sum);
  return 0;
}

/*
 * scanf to scan (read) from console
 * Console is stdin file
 * scanf is a variadic function
 * addresses of a and b needed in scanf
 * all variables a, b, and sum declared first (K&R)
 * formatting (%d) needed for variable
 */
