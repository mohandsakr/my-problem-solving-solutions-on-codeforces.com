//============================================================================
//problem link:http://codeforces.com/problemset/problem/869/A
// Name        : .cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status: accepted
//============================================================================

#include <iostream>
using namespace std;
const int N=1000000;
int freq[N+N]={};
int main() {
int n;
cin>>n;
int count=0;
int arr[n];
int arr2[n];
for(int i=0;i<n;i++){
cin>>arr[i];
++freq[arr[i]];
}
for(int i=0;i<n;i++){
cin>>arr2[i];
++freq[arr[i]];
}
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if(freq[arr[i]^arr[j]]){
			++count;
		}
	}
}
if(count%2==0)
{
	cout<<"Karen";
}
else{
	cout<<"Koyomi";
}





	return 0;
}
