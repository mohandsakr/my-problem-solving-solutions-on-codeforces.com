//============================================================================
//problem link:http://codeforces.com/contest/888/problem/A
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//accepted
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int count=0;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];

	}
	for(int i=1;i<n-1;i++){
		if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1])){
			++count;
		}
		if(arr[i]<arr[i-1]&&arr[i]<arr[i+1]){
					++count;
				}

	}
	cout<<count;

	return 0;
}
