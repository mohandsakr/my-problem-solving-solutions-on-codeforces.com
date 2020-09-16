

/*
problem name:365A. Good Number 
probkem link:http://codeforces.com/contest/365/problem/A
status:accepted
author :moahnd sakr
*/



#include <string>
#include <iostream>
#include<algorithm>
#include<set>
using namespace std;

int main() {

int n,k;
cin>>n>>k;
int count=0;

 for(int i=0;i<n;i++) 
{
	string s;
	cin>>s;
	
	int len=s.length();
	int cnt=0;
	
 	for(int j=0;j<=k;j++){

 		if(s.find('0'+j)!=-1)
 		{
 	++cnt;
 	
 		}
 		
 	}
 	if(cnt==k+1)
 	++count;
 	
 	
}
 
 

cout<<count <<endl;

	return 0;
}
