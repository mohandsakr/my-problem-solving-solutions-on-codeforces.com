/*
problem name:A. Valera and X
problem link:http://codeforces.com/contest/404/problem/A  
status:accepted
author :moahnd sakr
*/


#include <iostream>
#include<set>
using namespace std;
char arr[305][305];
int main() {
int n;
cin>>n;
int count=0;
set<char> se ;
set<char> se2 ;
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cin>>arr[i][j];
 	}
 }
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if(i==j||j==((n-1)-i)){
			++count;
			se2.insert(arr[i][j]);
		}
		else{
			se.insert(arr[i][j]);
		}
	}
}
char x=*se.begin();
char y=*se2.begin();
if(se.size()==se2.size()&&se.size()==1&&count==(2*n)-1&&x!=y)
cout<<"YES";
else {
	cout<<"NO";
}



return 0;
}
