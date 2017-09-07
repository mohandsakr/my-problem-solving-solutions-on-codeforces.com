//============================================================================
//problem link:http://codeforces.com/contest/680/problem/B
// Name        : Bear.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
/*
 * solving the problem using two pointers technique .
 *
 *
 */
//status:accepted
//============================================================================

#include <iostream>
using namespace std;

int main() {
	 int  n,a,counter=0;
	 cin>>n>>a;
	 int arr[n];
	 for(int i=0;i<n;i++){
		 cin>>arr[i];
	 }
	 --a;

	 if(arr[a])++counter;

	  for(int i=1;i<n;i++){
		 int right,left;
		 right=a+i;
		 left=a-i;
		 if(left>=0||right<n){
			 if(left>=0&&right<n){
			 if(arr[right]&&arr[left])counter+=2;
			 }
			 else if(left>=0){
				 if(arr[left])++counter;
			 }
			 else if(right<n){
				 if(arr[right])++counter;
			 }


		 }
	 }
	 cout<<counter;
	return 0;
}
