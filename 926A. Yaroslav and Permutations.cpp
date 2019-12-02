/*
problem link:https://codeforces.com/contest/296/problem/A
problem name:A. Yaroslav and Permutations
status: accepted;
author :moahnd sakr

*/


#include <iostream>
#include<set>
using namespace std;
int arr[1005]={};

int main() {
 	
int n;
cin>>n;
 for(int i=0;i<n;i++)
{
int c;
cin>>c;
++arr[c];
}
bool check=0 ;
int val=(n+1)>>1;

for(int i=1;i<1001;i++){
	
	if(arr[i]>val){
		check=1;
	}
}
if(!check||n==1||(n==3&&check)){
	cout<<"YES\n";
	
}
else {
	cout<<"NO\n";
}




	return 0;
}
