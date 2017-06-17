//============================================================================
//problem link :
// Name        : Twins.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	 int n;
	 cin>>n;
	 int arr[n];
	 int sum=0;
	 int counter=0;
	 for(int i=0;i<n;i++){
		 cin>>arr[i];
		 sum+=arr[i];
	 }
	 sum=sum/2;
	 sort(arr,arr+n);
	 int sum2=0;
	 for(int i=n-1;i>=0;i--){
		 sum2+=arr[i];
		 ++counter;
		if(sum2>sum){
		 	break;
		}


	 }

	 cout<<counter;






	return 0;
}
