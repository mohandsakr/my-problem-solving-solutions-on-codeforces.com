//============================================================================
//problem link:http://codeforces.com/problemset/problem/337/A
// Name        : .cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
 //============================================================================

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int mini=100000;
	int arr[m];
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
sort(arr,arr+m);
	for(int i=n;i<=m;i++){
		mini=min(mini,abs(arr[i-1]-arr[i-n]));
	}
	cout<<mini;





 	return 0;
}
