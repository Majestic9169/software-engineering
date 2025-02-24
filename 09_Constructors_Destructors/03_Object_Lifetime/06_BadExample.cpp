#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

class String {
  size_t len_; // Swapped members cause garbage to be printed or program crash
  char *str_;

public:
  String(char *s) : str_(strdup(s)), len_(strlen(str_)) {
    cout << "ctor: ";
    print();
  }

  ~String() {
    cout << "dtor: ";
    print();
    free(str_);
  }

  void print() { cout << "(" << str_ << ": " << len_ << ")" << endl; }
};

int main() {
  String s((char *)"Partha");
  s.print();
}

/*
 * len_ preceds str_ in list of data members
 * len_(strlen(str_)) is executed before str_(strdup(s))
 * when strlen(str_) is called str_ is still unitialized
 */
