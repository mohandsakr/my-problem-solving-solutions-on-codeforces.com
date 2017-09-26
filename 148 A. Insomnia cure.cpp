//============================================================================.
//problem link:http://codeforces.com/problemset/problem/148/A
// Name        : .cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================
#include<algorithm>
#include <iostream>
using namespace std;

int main() {
int k,l,m,n,d;
cin>>k>>l>>m>>n>>d;
bool arr[d];
for(int i=0;i<d;i++){
	if(!((i+1)%k)||!((i+1)%l)||!((i+1)%m)||!((i+1)%n))arr[i]=1;
	else
		arr[i]=0;
}
cout<<count(arr,arr+d,1);



 	return 0;
}
