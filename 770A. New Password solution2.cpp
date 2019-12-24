/*
problem name:770A. New Password
version : solution2
problem link: https://codeforces.com/contest/770/problem/A
staus:accepted
author:mohand sakr

*/

#include <iostream>
#include<string>
using namespace std;

int main() {
  
  string s="abcdefghijklmnopqrstuvwxyz";
   string s2="";
   int n,k;
   cin>>n>>k;
  for(int i=0;i<n;i++){
  	s2+=s[i%k];
  }
 
 cout<<s2<<endl;
 
 
 
 
 
 
 	return 0;
}
