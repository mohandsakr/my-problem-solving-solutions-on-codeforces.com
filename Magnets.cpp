//============================================================================
//problem link:http://codeforces.com/contest/344/problem/A
// Name        : Magnets.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n,nmagnatics=1;
	cin>>n;
	string s1,s2;
	cin>>s1;
	for(int i=1;i<n;i++){
		cin>>s2;
		if(s1[1]==s2[0])
			nmagnatics++;
		s1=s2;

	}
	cout<<nmagnatics;
	return 0;
}
