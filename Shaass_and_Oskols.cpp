//============================================================================
//problem link:http://codeforces.com/contest/294/problem/A
// Name        : Shaass_and_Oskols.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================

#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
int m;
cin>>m;
for(int i=0;i<m;i++){
	int x;
	int y;
	cin>>x>>y;

	 arr[x]+=arr[x-1]-y;
	arr[x-2]+=y-1;
	arr[x-1]=0;
}
for(int i=0;i<n;i++){

cout<<arr[i]<<'\n';
}




















	return 0;
}
