/*
 * problem link:https://codeforces.com/problemset/problem/1352/A
 * problem name: 1352A - Sum of Round Numbers
 * status:ACCEPTED
 * author :Mohand Sakr.
 */

#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> vect;
    int j = 0;
    while (n > 0) {
      if (n % 10) {
        int ans = pow(10, j);
        ans *= (n % 10);
        vect.push_back(ans);
      }
      n /= 10;
      ++j;
    }
    int len = vect.size();
    cout << len << endl;
    for (int i = 0; i < len; i++) {
      cout << vect[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
