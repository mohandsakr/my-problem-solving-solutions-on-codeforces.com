//============================================================================
//problem link:http://codeforces.com/contest/339/problem/A
// Name        : HelpfulMaths.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
#include<string>
#include <algorithm>
using namespace std;


int main() {
	 string s,s2;
	 cin>>s;
	 int len=s.length();
	for(int i=0;i<len;i++){
		if(s[i]!='+'){
			s2+=s[i];
		}
	}
	sort(s2.begin(),s2.end());
	len=s2.length();
	if(len>1){
	cout<<s2[0];
	for(int i=1;i<len-1;i++){
		cout<<'+'<<s2[i];
	}
	cout<<'+'<<s2[len-1];}
	else
		cout<<s;

	return 0;
}
