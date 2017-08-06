//============================================================================
//problem link:http://codeforces.com/problemset/problem/158/A
// Name        : Next.cpp
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
	 int k;
	 cin>>n>>k;
	 int counter=0;
	 int arr[n];
	 for(int i=0;i<n;i++){
		 cin>>arr[i];
	 }
	for(int i=0;i<n;i++){
		if(arr[i]>=arr[k-1]&&arr[i]!=0){
			counter++;
		}
	}

	 cout<<counter;



	return 0;
}
