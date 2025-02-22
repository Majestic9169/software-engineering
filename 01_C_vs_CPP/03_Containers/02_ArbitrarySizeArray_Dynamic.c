// ArbitrarySizeArray_Dynamic.c
#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("Enter no. of elements: ");
  int count, sum = 0;
  /* scanf("%d", &count); */
  count = 10;

  int *arr = (int *)malloc(sizeof(int) * count);
  for (int i = 0; i < count; i++) {
    arr[i] = i;
    sum += arr[i];
  }
  printf("Array Sum: %d\n", sum);
  return 0;
}

/*
 * malloc allocates space using sizeof
 */
