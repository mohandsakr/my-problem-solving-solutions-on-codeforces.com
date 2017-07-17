//============================================================================
//problem link:http://codeforces.com/contest/112/problem/A
// Name        : PetyaandStrings.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
string touppr(string s){
	int len=s.length();
	for(int i=0;i<len;i++){
		s[i]=toupper(s[i]);
	}
	return s;
}
int main() {
	 string s,s2;
	 cin>>s>>s2;
	s= touppr(s);
	 s2=touppr(s2);
	 if(s<s2)
		cout<<"-1" ;
	 else if(s>s2)
		cout<<"1" ;
	 else
		cout<<"0" ;

	return 0;
}
