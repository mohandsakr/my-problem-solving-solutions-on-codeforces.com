//============================================================================
//problem link:http://codeforces.com/contest/136/problem/A
// Name        : [code.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
#include<string>
using namespace std;

int main() {
	 string s1,s2;
	 cin>>s1>>s2;
	 if(s1==s2)cout<<"-1";
	 else
	 {
		cout<<max(s1.length(),s2.length());
	 }
	return 0;
}
