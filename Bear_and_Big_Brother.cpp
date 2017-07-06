//============================================================================
//problem link :http://codeforces.com/contest/791/problem/A
// Name        : Bear_and_Big_Brother.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================

#include <iostream>
using namespace std;

int main() {
	 int a,b;
	 cin>>a>>b;
	 int count =0;
	 while(a<b || a==b){
		 ++count;
		 a=3*a;
		 b=b*2;
	 }
	 cout<<count;
	return 0;
}
