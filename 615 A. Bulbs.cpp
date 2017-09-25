//============================================================================
//problem link:http://codeforces.com/problemset/problem/615/A
// Name        : .cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
using namespace std;
bool arr[101];
int main() {
int n,m;
cin>>n>>m;

bool flag=true;
 for(int i=0;i<n;i++){
	int x;
	cin>>x;
	for(int i=0;i<x;i++){
		int y;
		cin>>y;
		arr[y-1]=1;
	}
}
 for(int i=0;i<m;i++){
	 if(!arr[i]){
		 flag=false;
	 }
 }
 if(flag)
	 cout<<"YES";
 else
 {
	 cout<<"NO";
 }

return 0;
}
