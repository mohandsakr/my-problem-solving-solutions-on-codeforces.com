//============================================================================
// problem link:http://codeforces.com/contest/709/problem/A
// Name        : Juicer.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
// status:accepted
//============================================================================

#include <iostream>
using namespace std;

int main() {
  long long n, b, d, sum = 0, dtimes = 0;
  cin >> n >> b >> d;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x <= b) {
      sum += x;
    }
    if (sum > d) {
      dtimes += 1;
      sum = 0;
    }
  }
  cout << dtimes;
  return 0;
}
