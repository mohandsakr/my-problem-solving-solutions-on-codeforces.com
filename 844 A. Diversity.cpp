//============================================================================
//problem link:http://codeforces.com/contest/844/problem/0
// Name        : .cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status:pretestpassed
//============================================================================

#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int n;
	cin>>s>>n;
	int len =s.length();
	set<char>sa;
	for(int i=0;i<len;i++)
	{
		sa.insert(s[i]);
			}
	if(len<n){
		cout<<"impossible";
	}
	else{
		int size2=sa.size();
		if(size2>=n)cout<<"0";
		else{
			cout<<n-size2;
		}
	}
	return 0;
}
