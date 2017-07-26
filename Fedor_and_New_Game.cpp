//============================================================================
//problem link:http://codeforces.com/problemset/problem/467/b
// Name        : Fedor_and_New_Game.cpp
// Author      : 
// Version     :
// Copyright   : use it under your responsibity
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
using namespace std;

int main() {
	 int n,m,k;
	 int count=0;
	 cin>>n>>m>>k;
	 int arr[m+1];
	 for(int i=0;i<=m;i++){
		 cin>>arr[i];
	 }
	 for(int i=0;i<m;i++){
		 int w=arr[m]^arr[i];
		 if(__builtin_popcount(w)<=k)
			 count++;

	 }
	 cout<<count;

	return 0;
}
