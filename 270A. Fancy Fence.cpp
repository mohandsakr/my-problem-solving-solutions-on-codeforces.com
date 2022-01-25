/*
 *prblem name:270A. Fancy Fence
 *problem link:https://codeforces.com/contest/270/problem/A
 *staus:accepted
 *author :mohand sakr
 */

#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;
    if (360 % (180 - x))
      cout << "NO\n";
    else
      cout << "YES\n";
  }
  return 0;
}
