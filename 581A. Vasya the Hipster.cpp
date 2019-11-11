/*
problem name:581A. Vasya the Hipster
problem link:https://codeforces.com/problemset/problem/581/A
status:accepted
author: mohand sakr

*/


#include <iostream>
#include<algorithm>
using namespace std;

int main() {
int a,b;
cin>>a>>b;
int mini=min(a,b);
int maxi=max(a,b);
cout<<mini<<" "<<(maxi-mini)/2<<endl;




	return 0;
}
