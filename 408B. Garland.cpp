//============================================================================
//problem link:http://codeforces.com/contest/408/problem/B
// Name        : .cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int arr[26];
int arr2[26];
int main() {

string s,s2;
int sum=0;
cin>>s>>s2;
int len1=s.length();
int len2=s2.length();
for(int i=0;i<len1;i++){
	++arr[s[i]-'a'];
}
for(int i=0;i<len2;i++){
	++arr2[s2[i]-'a'];
}
for(int i=0;i<26;i++){
	if(arr2[i])
	{
		if(arr[i])
	sum+=min(arr[i],arr2[i]);
		else{
			sum=0;
			break;
		}
	}
}

if(sum){

	cout<<sum;
}
else{
	cout<<"-1";
}





	return 0;
}
