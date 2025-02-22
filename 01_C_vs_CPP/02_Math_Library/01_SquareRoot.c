// SquareRoot.c
#include <math.h>
#include <stdio.h>

int main() {
  double x, sqrt_x;
  printf("Input number: \n");
  /* scanf("%lf", &x); */
  x = 2.0;

  sqrt_x = sqrt(x);

  printf("Sq. Root of %lf is: %lf\n", x, sqrt_x);
  return 0;
}

/*
 * Math header is math.h (C Standard Library)
 * Formatting (%lf) is needed for variables
 * sqrt function from cstdlib
 * Default precision in print is 6
 */
