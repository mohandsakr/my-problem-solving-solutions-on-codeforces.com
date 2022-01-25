/*
 *problem link:https://codeforces.com/contest/1257/problem/B
 *problem name:1257B. Magic Stick
 *status:acdepted;
 *author :mohand sakr
 */

#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, y;
    cin >> x >> y;
    if (x == 1 && y == 1) {
      cout << "YES\n";
    } else if ((x == 2 || x == 3) && y < 4) {
      cout << "YES" << endl;
    } else if (x > 3) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}
