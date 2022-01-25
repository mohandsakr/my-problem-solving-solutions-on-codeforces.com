//============================================================================
// problem link :http://codeforces.com/problemset/problem/118/A
// Name        : String_Task.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
// status :accepted
//============================================================================

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string x, result = "";
  cin >> x;
  int y = x.length();
  for (int i = 0; i < y; i++) {
    x[i] = tolower(x[i]);
  }
  for (int i = 0; i < y; i++) {
    if (x[i] != 'a' && x[i] != 'o' && x[i] != 'y' && x[i] != 'e' &&
        x[i] != 'u' && x[i] != 'i') {
      result += ".";
      result += x[i];
    }
  }
  cout << result;
  return 0;
}
