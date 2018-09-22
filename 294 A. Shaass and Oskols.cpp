//problem link:http://codeforces.com/contest/294/problem/A
// status: accepted 
//problem  name:294 A. Shaass and Oskols
//author :mohand sakr

#include <iostream>
using namespace std;

int main() {
int n,m;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
cin>>m;
for(int i=0;i<m;i++){
	int x;
	int y;
	cin>>x>>y;
	int rigth=arr[x-1]-y;
	int left=y-1;
	if(x-1>=1){
		arr[x-2]+=left;
	}
	if(x+1<=n){
		arr[x]+=rigth;
	}
	arr[x-1]=0;
		
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}

	return 0;
}
