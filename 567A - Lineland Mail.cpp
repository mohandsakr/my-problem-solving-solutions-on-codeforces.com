//problem link:http://codeforces.com/contest/567/problem/A
//status:accepted.
//author : mohand sakr 
//
//
#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
	int n;
	cin>>n;
	long long arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		long long mini=100000000001;
		long long maxi=-10000000001;
		if(!i)
		{
			mini=min(mini,min(abs(arr[i]-arr[n-1]),abs(arr[i]-arr[i+1])));
			maxi=max(  maxi,max ( abs ( arr[i]-arr[n-1] ),max ( abs( arr[i]-arr[i+1] ) ,abs ( arr[i]-arr[n-1] ) ) ));

			
		}
		else if(i==n-1)
		{
			mini=min(mini,min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[0])));
			maxi=max( maxi,max( abs ( arr[i]-arr[i-1] ),max( abs ( arr[i]-arr[0] ) , abs( arr[i]-arr[n-1] ) ) ) );
			
		}
		else{
			mini=min(mini,min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1])));
			maxi=max(maxi,max(abs(arr[i]-arr[i-1]),max(abs(arr[i]-arr[i+1]), max(abs(arr[i]-arr[n-1]),abs(arr[i]-arr[0]) )) ) );
			
		}
		cout<<mini<<" "<<maxi<<"\n";
	}
 	return 0;
}
