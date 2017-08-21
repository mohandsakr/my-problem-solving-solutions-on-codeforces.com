//============================================================================
//problem link:http://codeforces.com/contest/807/problem/A
// Name        : 807-A Is it rated.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n,counter=0,counter2=0;
	cin>>n;
	int arr[n],arr2[n],arr3[n];
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		cin.ignore();
		arr[i]=x;
		arr2[i]=y;
		arr3[i]=y;
	}

	for(int i=0;i<n;i++){
		if(arr[i]==arr2[i])
			++counter;
	}

	sort(arr2,arr2+n);
	for(int i=n-1,j=0;i>=0;i--,j++)
	{
		if(arr2[i]==arr3[j])
		 ++counter2;

	}
	if(counter!=n)
		cout<<"rated";
	else if(counter==n&&counter2==n)
	{
        cout<<"maybe";
	}
	else{
cout<<"unrated";

	}

 	return 0;
}
