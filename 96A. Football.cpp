//============================================================================
////problem link:http://codeforces.com/problemset/problem/96/A
// Name        : A. Football.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	 string s;
	cin>>s;
	int len=s.length();
	bool flag=0;
	for(int i=0;i<len;i++){
		int ones=count(s.begin()+i,s.begin()+i+7,'1');
		int zeros=count(s.begin()+i,s.begin()+i+7,'0');
		if(ones>=7||zeros>=7)
			flag=1;


	}
	if(flag)
		cout<<"YES";
	else cout<<"NO";
	return 0;
}
