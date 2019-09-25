/*
problem name:A. Summer Camp;
problem link:https://codeforces.com/contest/672/problem/A
author :mohand sakr
status: accepted;




*/

#include <iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin>>n;
	string s="";
	for(int i=1;i<=1000;i++ ){
		s+=to_string(i);
	}
	cout<<s[n-1];
	
	return 0;
}
