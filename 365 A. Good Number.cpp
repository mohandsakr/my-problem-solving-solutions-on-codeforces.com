/*
problem name:365A .Good Number
problem link:http://codeforces.com/contest/365/problem/A
staus: accepted
author:moahnd sakr

*/


#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
int arr[10];
using namespace std;
int main() {
	int n,k;
	cin>>n>>k;
	vector<string> vect;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;

		vect.push_back(s);
	}
	int answer=0;
  
	for(int i=0;i<n;i++){
		int val=0;
		for(int j=0;j<=k;j++){
		if(	vect[i].find(to_string(j)) !=-1)
			++val;
			
		}
		if(val==k+1)
 		++answer;
		
	}
 
cout<<answer<<endl;
 
	return 0;
}
