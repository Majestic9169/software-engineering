#include "03_Interface.h"
#include <iostream>
using namespace std;

Stack::Stack() : data_(new char[100]), top_(-1) {}
Stack::~Stack() { delete[] data_; }

bool Stack::empty() { return (top_ == -1); }
void Stack::push(char x) { data_[++top_] = x; }
void Stack::pop() { --top_; }
char Stack::top() { return data_[top_]; }

int main() {
  Stack s;
  char str[10] = "ABCDE";

  for (int i = 0; i < 5; i++) {
    s.push(str[i]);
  }

  cout << "Reversed String: ";
  while (!s.empty()) {
    cout << s.top();
    s.pop();
  }
  cout << endl;

  return 0;
}
