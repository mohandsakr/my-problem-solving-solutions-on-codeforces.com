/*
problem link:http://codeforces.com/contest/433/problem/B
status:accepted
problem name:433B. Kuriyama Mirai's Stones
author:mohand sakr

*/
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
int n;
cin>>n;
long long arr[n]={};
long long arr2[n]={};
for(int i=0;i<n;i++){
	cin>>arr[i];
	arr2[i]=arr[i];
}
sort(arr2,arr2+n);
for(int i=1;i<n;i++){
	arr[i]=arr[i-1]+arr[i];
	arr2[i]=arr2[i-1]+arr2[i];
 }
int q;
cin>>q;
 for(int i=0;i<q;i++){
	int t,r,l;
	cin>>t>>l>>r;
	l-=1;
	r-=1;
	if(t==1){
		if(l==0)
	cout<<arr[r]<<endl;
	else {
			cout<<arr[r]-arr[l-1]<<endl;
	}
	}
	else {
		if(l==0)
			cout<<arr2[r]<<endl;
			else {
				cout<<arr2[r]-arr2[l-1]<<endl;

			}
	}
}



	return 0;
}
