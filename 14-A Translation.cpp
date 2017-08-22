//============================================================================
//problem link:http://codeforces.com/contest/41/problem/A
// Name        : 14-A.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	string s,s2;
	cin>>s;
	cin>>s2;
	reverse(s.begin(),s.end());
	if(s==s2)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
