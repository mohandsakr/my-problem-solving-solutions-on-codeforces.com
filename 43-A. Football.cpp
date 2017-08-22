//============================================================================
//problem link:http://codeforces.com/contest/43/problem/A
// Name        : .cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
#include<map>
#include<string>
using namespace std;
int main() {
	int n;
	cin>>n;
	map<string,int> ma;
	map<string,int> ::iterator it;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		++ma[s];
	}
	it=ma.begin();
	int x=ma.size();
	if(x!=1){
	int value=(*it).second;
	it++;
	int value2=(*it).second;
	if(value2>value){
		cout<<(*it).first;
	}
	else if(value>value2)
	{
		it=ma.begin();
		cout<<(*it).first;

	}
	}
	else
	{
	cout<<(*it).first;
	}


	return 0;
}
