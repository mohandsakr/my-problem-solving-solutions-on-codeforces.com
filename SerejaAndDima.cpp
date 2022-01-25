//============================================================================
// problem link :
// Name        : SerejaAndDima.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
// status:accepted
//============================================================================

#include <iostream>

using namespace std;
int main() {
  int n, snscore = 0, dimscore = 0, counter = 0;
  cin >> n;
  int rigtht = 0;
  int left = n - 1;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  while (counter < n) {
    if (counter % 2 == 0) {
      if (arr[rigtht] > arr[left]) {
        snscore += arr[rigtht];
        rigtht += 1;
      } else {
        snscore += arr[left];
        left -= 1;
      }
    } else {
      if (arr[rigtht] > arr[left]) {
        dimscore += arr[rigtht];
        rigtht += 1;
      } else {
        dimscore += arr[left];
        left -= 1;
      }
    }
    counter++;
  }
  cout << snscore << " " << dimscore;
  return 0;
}
