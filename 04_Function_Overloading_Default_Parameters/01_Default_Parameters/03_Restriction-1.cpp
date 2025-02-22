// Restriction-1.cpp

// void f(int, double = 0.0, char*); // ERROR: missing default argument for
// char*

void g(int, double = 0, char * = nullptr);
// void g(int, double = 1, char * = nullptr); // ERROR: redefinition of default
// argument

int main() {
  int i = 5;
  double d = 1.2;
  char c = 'b';

  // g(); // ERROR: g does not take 0 arguments
  g(i);
  g(i, d);
  g(i, d, &c);

  return 0;
}
