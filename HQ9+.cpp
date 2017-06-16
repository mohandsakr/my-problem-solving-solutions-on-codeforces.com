//============================================================================
//problem link :http://codeforces.com/problemset/problem/133/A
// Name        : HQ9+.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
string s;
cin>>s;
int i=s.find_first_of("HQ9");
if(i!=-1)
	cout<<"YES";
else
	cout<<"NO";




	return 0;
}
