/*
 *problem link: https://codeforces.com/problemset/problem/1328/A
 *problem name:1328A. Divisibility Problem
 *status:ACCEPTED
 *author :Mohand Sakr.
 */

#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, y;
    cin >> x >> y;
    if (x % y == 0) {
      cout << 0 << endl;
    } else {
      int w = x % y;
      cout << y - w << endl;
    }
  }
  return 0;
}
