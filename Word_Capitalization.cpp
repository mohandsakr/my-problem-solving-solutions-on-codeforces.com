//============================================================================
// problem link :
// Name        : Word_Capitalization.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
// status :
//============================================================================

#include <bits/stdc++.h>
#include <iostream>

using namespace std;
char nedded(char y) {
  if (y >= 'a' && y <= 'z') {
    y = y - 'a' + 'A';
  }
  return y;
}
int main() {
  char value[1001];
  cin >> value;
  char x = value[0];
  value[0] = nedded(x);
  cout << value;
}
