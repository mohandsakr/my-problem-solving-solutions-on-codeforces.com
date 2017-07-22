//============================================================================.
//problem link:http://codeforces.com/contest/732/problem/A
// Name        : Buy_A_Shovel.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsiblity
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
using namespace std;

int main() {
int k,r;
cin>>k>>r;
int val=1;

 while(true){
	 if(((val*k)-r)%10==0||val*k%10==0)break;
	 else
		 ++val;
 }



cout<<val;




	return 0;
}
