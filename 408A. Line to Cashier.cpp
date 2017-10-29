//============================================================================
//problem link:http://codeforces.com/contest/408/problem/A
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
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
	}
for(int i=0;i<n;i++)
{long long sum=0;
for(int j=0;j<arr[i];j++){
	int x;
	cin>>x;
	sum+=15+(x*5);
}
arr[i]=sum;
	}
sort(arr,arr+n);
cout<<arr[0];

	return 0;
}
