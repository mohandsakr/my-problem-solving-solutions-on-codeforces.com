/**
problem name:16A. Flag 
problem link:http://codeforces.com/contest/16/problem/A
status:accepted
author:sakr


**/


#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	string arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int countr=0;
	int countc=0;
	for(int i=0;i<n;i++){
		int couentsmilar=count(arr[i].begin(),arr[i].end(),arr[i][0]);
		if(couentsmilar ==m)++countr ;
		if(n>1)
		if(!i){
			if(arr[i][0]!=arr[i+1][0]) ++countc;
			
			
		}
		else if(i==n-1){
			if(arr[i][0]!=arr[i-1][0]){
				++countc;
			}
		}
		else {
			if(arr[i][0]!=arr[i+1][0]&&arr[i][0]!=arr[i-1][0])
			++countc;
		}

	}
	if(n>1)
	if(countc==countr&&countr==n)
	cout<<"YES\n";
	else{
		cout<<"NO\n";
	}
else {
	if(countr)
	cout<<"YES\n";
	else{
		cout<<"NO\n";
	}
}
 
 
 	return 0;
}
