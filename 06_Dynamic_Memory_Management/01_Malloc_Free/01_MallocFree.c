// MallocFree.c
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p = malloc(sizeof(int));
  *p = 5;
  printf("%d\n", *p);
  free(p);
  return 0;
}

/*
 * Dynamic Memory management functions in stdlib.h header for C
 */
