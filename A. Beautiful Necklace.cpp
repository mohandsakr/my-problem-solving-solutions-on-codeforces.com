//============================================================================
//problem link:http://codeforces.com/gym/101575/problem/0
// Name        : .cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isbuatiful(string s){
	int n=s.length();
	char y=s[0];
	int cou=count(s.begin(),s.end(),y);
	if(n==cou)return 1;
	else
		return 0;
}
int main() {
int n;
int counter=0;
int maxlength=0;
cin>>n;
for(int i=0;i<n;i++){
	string s;
	cin>>s;
	if(isbuatiful(s)){
		++counter;
		int x=s.length();
		maxlength=max(maxlength,x);
	}
}
if(counter)
	cout<<maxlength;
else{
	cout<<0;
}




	return 0;
}
