//============================================================================
//problem link:http://codeforces.com/contest/431/problem/A
// Name        : Black_Square.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================

#include <iostream>
#include<string>
using namespace std;

int main() {
	long long calories=0;
	int a1,a2,a3,a4;
	string s;
	cin>>a1>>a2>>a3>>a4;
	cin>>s;
	int len=s.length();
	for(int i=0;i<len;i++){
		if(s[i]=='1')
			calories+=a1;
		if(s[i]=='2')
					calories+=a2;
		if(s[i]=='3')
					calories+=a3;
		if(s[i]=='4')
					calories+=a4;

	}
	printf("%lld",calories);


	return 0;
}
