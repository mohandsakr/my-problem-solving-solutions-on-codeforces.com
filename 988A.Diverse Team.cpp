//============================================================================
//problem link:http://codeforces.com/contest/988/problem/A
// Name        : Diverse.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status : accepted
//============================================================================

#include <iostream>
#include<set>
#include<algorithm>
using namespace std;
int arr[100];
int arr2[100];
int main() {
	set<int > se;
	set<int > ::iterator it;

int n,k;
cin>>n>>k;
for(int i=0;i<n;i++){
cin>>arr[i];
se.insert(arr[i]);
++arr2[arr[i]];
}
int q=0;
if(se.size()>=k){
	cout<<"YES\n";
	for(int i=0;i<n&&q<k;i++){
		 if(arr2[arr[i]]!=-1){
			 cout<<i+1<<" ";
			 arr2[arr[i]]=-1;
			 q++;
		 }
	}
	cout<<"\n";
}
else {

	cout<<"NO";
}



	return 0;
}
