//============================================================================
//problem link:http://codeforces.com/contest/69/problem/A
// Name        : [codeforces]-Young.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
using namespace std;

int main() {
	 int x=0,y=0,z=0;
	 int n;
	 cin>>n;
	 while(n--){
		 int a,b,c;
		 cin>>a>>b>>c;
		 x+=a;
		 y+=b;
		 z+=c;
	 }
	 if(!x&&!y&&!z){
		 cout<<"YES";
	 }
	 else {
		 cout<<"NO";
	 }
	return 0;
}
