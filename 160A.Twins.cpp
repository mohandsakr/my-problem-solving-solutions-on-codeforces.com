/*
problem link:http://codeforces.com/contest/160/problem/A
status:accept
author:mohand sakr
problem name:160A.Twins 

*/
#include<algorithm>
#include <iostream>
using namespace std;
int arr[105];
int arr2[105];
	
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	arr2[0]=arr[0];
	for(int i=1;i<n;i++){
		arr2[i]=arr2[i-1]+arr[i];
	}
	int answer=0;
	for(int i=n-1;i>=0;i--){
 		int leftpart=arr2[i-1];
		int rightpart=arr2[n-1]-arr2[i-1];
 		if(rightpart>leftpart){
			cout<<n-i<<endl;
			break;
		}
		
	 
	}
	
 	
 	return 0;
}
