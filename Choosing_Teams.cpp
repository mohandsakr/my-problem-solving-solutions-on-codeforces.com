//============================================================================
//problem link :http://codeforces.com/problemset/problem/432/A
// Name        : Choosing_Teams.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status:
//============================================================================


#include <iostream>
using namespace std;

int main() {
	 int n,k;
	 int count=0;
	 cin>>n>>k;
	 int arr[n];
	 for(int i=0;i<n;i++){
	 cin>>arr[i];
	 }
	 for(int i=0;i<n;i++){
		 if(5-arr[i]>=k)
			 count++;
	 }
	 cout<<count/3;
	return 0;
}
