//============================================================================
// problem link:http://codeforces.com/contest/59/problem/A
// Name        : Word.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
// status:accepted
//============================================================================

#include <iostream>
#include <string>
using namespace std;
string toupp(string s) {
  int len = s.length();
  for (int i = 0; i < len; i++) {
    s[i] = toupper(s[i]);
  }
  return s;
}
string tolow(string s) {
  int len = s.length();
  for (int i = 0; i < len; i++) {
    s[i] = tolower(s[i]);
  }
  return s;
}
int main() {
  string s;
  cin >> s;
  int len = s.length();
  int upper = 0;
  int lower = 0;
  for (int i = 0; i < len; i++) {
    if (isupper(s[i]))
      upper++;
    else
      lower++;
  }
  if (upper > lower) {
    s = toupp(s);
  } else if (upper < lower)
    s = tolow(s);
  else
    s = tolow(s);
  cout << s;
  return 0;
}
