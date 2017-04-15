//============================================================================
//problem link :http://codeforces.com/problemset/problem/71/A
// Name        : Way_Too_Long_Words_vesion2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status: accepted
//============================================================================

#include <iostream>
#include<string>
using namespace std;

int main() {
	 int t;
	 cin>>t;

	 while(t--){
		 string s;
		 cin>>s;
		int x=s.length();
		if(x<=10){
			cout<<s<<endl;
		}
		else
		{
			cout<<s[0]<<x-2<<s[x-1]<<endl;

		}




	 }
	return 0;
}
