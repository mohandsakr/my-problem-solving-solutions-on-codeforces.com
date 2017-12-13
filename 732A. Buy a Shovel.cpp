//============================================================================
//problem link:http://codeforces.com/contest/732/problem/A
// Name        : .cpp
// Author      : mohand sakr
// Version     :A. Buy a Shovel
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int value=0 ;
	long long priceMade=0;
int k,r;
cin>>k>>r;
bool flag=1;
while(flag){
	if((priceMade%10==0&&priceMade!=0)||priceMade%10==r){
	 break;

}
	++value;
priceMade+=k;
}

cout<<value;














	return 0;
}
