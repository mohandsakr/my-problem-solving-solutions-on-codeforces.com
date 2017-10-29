//============================================================================
//problem link:http://codeforces.com/problemset/problem/318/A
// Name        : A. Even Odds.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
using namespace std;

int main() {
long long n,k;
cin>>n>>k;
long long mid;
if(n%2){
	  mid=n/2+1;
if(k<=mid){
	cout<<k*2-1;
}
else{
	cout<<((k-mid)*2);
}

}else{
 mid=n/2;
 if(k<=mid){
	 cout<<(k*2)-1;
 }
 else{
	 cout<<((k-mid)*2);
 }

}







	return 0;
}
