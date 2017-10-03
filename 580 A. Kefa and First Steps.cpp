//============================================================================
//problem link:http://codeforces.com/problemset/problem/580/A
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
int maxlength=0;
int start=0;
int end=0;
for(int i=0;i<n;i++){
 cin>>arr[i];
 if(i){
	 if(arr[i]<arr[i-1]){
		 end=i-1;
		 maxlength=max(maxlength,(end-start)+1);
		 start=i;
	 }
	 else{
		 end=i;
		 maxlength=max(maxlength,(end-start)+1);
	 }
 }

}
if(!start&&!end){
	cout<<n;
}
else{
cout<<maxlength;
}
 	return 0;
}
