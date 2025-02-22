// Stack.cpp
#include <cstring>
#include <iostream>
#include <stack>

using namespace std;

int main() {
  char str[10] = "ABCDE";
  stack<char> s;
  for (int i = 0; i < strlen(str); i++) {
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

/*
 * No codes for creating stack
 * No initilization
 * Clean interface for stack functions
 * Available in library - well tested
 */
