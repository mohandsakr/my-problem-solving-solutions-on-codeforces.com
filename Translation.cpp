//============================================================================
//problem link:http://codeforces.com/problemset/problem/41/A
// Name        : Translation.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :
//============================================================================

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	 string s1,s2;
	 cin>>s1>>s2;
	 reverse(s2.begin(),s2.end());
	 if(s1==s2){
		 cout<<"YES";
	 }
	 else
		 cout<<"NO";





	return 0;
}
