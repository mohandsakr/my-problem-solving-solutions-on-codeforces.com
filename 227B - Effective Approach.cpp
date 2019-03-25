/*
problem link:http://codeforces.com/problemset/problem/227/B
status:accepted
author :moahndsakr
problem name: 227B - Effective Approach



*/
#include <iostream>
#include<map>
using namespace std;
 

 
 
int main() {
	map<int,int> ma;
long long first=0;
long long second=0;
int n;
cin>>n;
for(int i=0;i<n;i++){
	int y;
	cin>>y;
	ma[y]=i;
}
int q;
cin>>q;
for(int i=0;i<q;i++){
	int x;
	cin>>x;
	first+=ma[x]+1;
	  
	second+=n-ma[x];
	 
}

cout<<first<<" "<<second;


	return 0;
}
