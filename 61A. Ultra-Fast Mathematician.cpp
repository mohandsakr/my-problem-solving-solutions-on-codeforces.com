//============================================================================
//problem link:http://codeforces.com/problemset/problem/61/A
// Name        : .cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================
#include<string>
#include <iostream>
using namespace std;

int main() {
string s,s1,s2;
cin>>s>>s1;
int len=s.length();
for(int i=0;i<len;i++){
	if(s[i]!=s1[i])
	s2+='1';
	else{
		s2+='0';
	}
}
cout<<s2;






	return 0;
}
