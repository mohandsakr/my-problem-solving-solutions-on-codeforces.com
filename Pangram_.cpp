//============================================================================
//problem link:http://codeforces.com/problemset/problem/520/A
//problem id: codeforces problem 520A
// Name        : Pangram_.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
#include <set>
#include<set>
using namespace std;

int main() {
	string s;
	int n;
	cin>>n;
	cin>>s;
	set<char> se;
	for(int i=0;i<n;i++){
		s[i]=tolower(s[i]);
		se.insert(s[i]);

	}
	if(se.size()==26){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}

 	return 0;
}
