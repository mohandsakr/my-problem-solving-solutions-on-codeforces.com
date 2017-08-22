//============================================================================
//problem link:http://codeforces.com/contest/556/problem/A
// Name        : A. Case of the Zeros and Ones.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
using namespace std;
#include<string>
#include<algorithm>
int main() {
	int n;
	cin>>n;
	 string s;
	 cin>>s;
	 int zers=count(s.begin(),s.end(),'0');
	 int ons=count(s.begin(),s.end(),'1');
	 cout<< n-(2*min(zers,ons));
	return 0;
}
