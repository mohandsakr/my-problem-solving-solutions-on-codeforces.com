//============================================================================
//problem link:http://codeforces.com/contest/236/problem/A
// Name        : Boy_or_Girl.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//
//============================================================================

#include <iostream>
#include<string>
#include <set>
using namespace std;

int main() {
	 string s;
	 cin>>s;
	 int len=s.length();
	 set <char> ma;
	 for(int i=0;i<len;i++){
		 ma.insert(s[i]);

	 }
	 if(ma.size()%2==0)
		 cout<<"CHAT WITH HER!";
	 else {
		 cout<<"IGNORE HIM!";
	 }
	return 0;
}
