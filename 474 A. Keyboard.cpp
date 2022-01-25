/*
 * problem  link:https://codeforces.com/contest/474/problem/A
 * problem name:474 A. Keyboard
 * author: mohand sakr
 * status :accepted
 */
#include <iostream>
#include <string>
using namespace std;

string solve(string s1, char c) {
  string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
  string answer;
  int len = s1.length();
  for (int i = 0; i < len; i++) {
    int index = s.find(s1[i]);
    if (c == 'R') {
      answer += s[index - 1];
    } else {
      answer += s[index + 1];
    }
  }
  return answer;
}

int main() {
  string s2;
  char c;
  cin >> c;
  cin >> s2;
  cout << solve(s2, c);
  return 0;
}
