/*
problem name:289A - Polo the Penguin and Segments
problem link:http://codeforces.com/contest/289/problem/A
status:Accepted
author:mohand sakr



*/


#include <iostream>
using namespace std;
 
int main() {
int n,k;
cin>>n>>k;
int sum=0;
for(int i=0;i<n;i++){
	int r,l;
	cin>>r>>l;
	sum+=((l-r)+1);
}
cout<<(k-(sum%k))%k<<endl;
 
	return 0;
}
