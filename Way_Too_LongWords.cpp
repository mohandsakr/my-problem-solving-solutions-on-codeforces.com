//============================================================================
//problem link:
// Name        : Way_Too_LongWords.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style.
//status:accepted
//============================================================================

#include <iostream>
#include<string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		string s,s2;
		cin>>s;
		int len=s.length();
		if(len>10){
			 cout<<s[0]<<len-2<<s[len-1]<<'\n';
		}
		else {
			cout<<s<<'\n';
		}






	}
	return 0;
}
