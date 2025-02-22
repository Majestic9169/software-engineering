int main() {
  int m = 4, n = 5;
  int *const p = &n;

  n = 6;  // OKAY
  *p = 7; // OKAY

  // p = &m; // ERROR: p is a constant pointer, can not be reassigned
}

/*               +----------------+
 *               |  +----------+  |
 *               |  |  +----+  |  |
 *               |  |  |    |  |  |
 *               |  |  |    ^  |  |
 *              int * const p  |  |
 *               ^  ^  ^       |  |
 *                  |  +-------+  |
 *                  |             |
 *                  +-------------+
 *
 *              p is a const pointer to an integer
 */
