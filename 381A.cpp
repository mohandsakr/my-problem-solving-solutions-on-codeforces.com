//problem link:http://codeforces.com/contest/381/problem/A
//status:accepted
#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
int r=n-1;
int l=0;
int sscore=0;
int dscore=0;
for(int i=0;i<n;i++){
	if(i%2==0){
		if(arr[r]>arr[l])
		{
			sscore+=arr[r];
			--r;
		}
		else if(arr[r]<arr[l]){
		 sscore+=arr[l];
			++l;
		}
		else{
		sscore+=arr[l];	
		}
	}
	else{
		if(arr[r]>arr[l])
		{
			dscore+=arr[r];
			--r;
		}
		else if(arr[r]<arr[l]){
		 dscore+=arr[l];
			++l;
		}
			else{
		dscore+=arr[l];	
		}
		}
}
cout<<sscore<<" "<<dscore;
	return 0;
}
