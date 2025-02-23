// MallocFree.cpp
#include <cstdlib>
#include <iostream>

int main() {
  int *p = (int *)malloc(sizeof(int));
  *p = 5;

  std::cout << *p << std::endl;

  free(p);

  return 0;
}

/*
 * malloc in cstdlib
 * malloc() allocates memory on the heap or free store
 * sizeof(int) needs to be provided
 * pointer to allocated memory returned as void* - needs case to int*
 * (implicit cast in C, not in C++)
 * allocated memory is released by free() from heap or free store
 * calloc() and realloc() also available in both languages
 */
