//============================================================================
//problem link :http://codeforces.com/problemset/problem/112/A
// Name        : Petya_and_Strings.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string first,second;
	cin>>first>>second;
	for(int i=0;i<first.length();i++)
	{
	first[i]=tolower(first[i]);
	second[i]=tolower(second[i]);
	}
	if(first==second){
		cout<<"0";
	}
	else if(first>second)
		cout<<"1";
	else
		cout<<"-1";

	return 0;
}
