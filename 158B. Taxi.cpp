	//============================================================================
	//problem link:http://codeforces.com/problemset/problem/158/B
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
		int n;
		cin>>n;
		int taxicount=0;
		int arr[5]={0,0,0,0,0};

		for(int i=0;i<n;i++){
			 int a;
			 cin>>a;
			 ++arr[a];
		}
		 taxicount+=arr[4];
		 arr[4]=0;
		 if(arr[2]){
		 int t=arr[2]>>1;
		 taxicount+=t;
		 arr[2]-=t*2;
		 }
		 if(arr[1]&&arr[3]){
		 int mnivalue=min(arr[1],arr[3]);
		 taxicount+=mnivalue;
		 arr[1]-=mnivalue;
		 arr[3]-=mnivalue;
		 }
		 if(arr[1]&&arr[2]){
			 if(arr[2]<=arr[1]>>1&&arr[1]>>1){
			 taxicount+=arr[2];
			 arr[1]-=arr[2]*2;
			 arr[2]-=arr[2];
			 }
			 else{
				 int z=min(arr[1],arr[2]);
				 taxicount+=z;
				 arr[1]-=z;
				 arr[2]-=z;
			 }
		 }
		 int y=arr[1]/4;
		 taxicount+=y;
		 arr[1]-=y*4;
		 if(arr[1]<4&&arr[1]){
		 	taxicount+=1;
		 	arr[1]=0;
		 		}
		 for(int i=1;i<5;i++){

			taxicount+=arr[i];}


		 cout<<taxicount;

		return 0;
	}
