// StringConcat.cpp
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

typedef struct _String {
  char *str;
} String;

String operator+(const String &fName, const String &lName) {
  String s;
  s.str = (char *)malloc(strlen(fName.str) + strlen(lName.str) + 1);
  strcpy(s.str, fName.str);
  strcat(s.str, lName.str);
  return s;
}

int main() {
  String fName, lName, name;
  fName.str = strdup("Partha ");
  lName.str = strdup("Das");

  name = fName + lName; // Overloaded operator +
  cout << "First Name: " << fName.str << endl;
  cout << "Last Name: " << lName.str << endl;
  cout << "Full Name: " << name.str << endl;

  return 0;
}
