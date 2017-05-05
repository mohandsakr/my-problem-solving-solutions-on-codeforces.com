//============================================================================
//problem link:http://codeforces.com/problemset/problem/253/A
// Name        : BoysandGirls.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status : accepted
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	freopen("input.txt","rt",stdin);
	freopen("output.text","wt",stdout);
	 int n,m;
	 string s="";
	 cin>>n>>m;
	 int nn=n,mm=m;
	 if(n>m){
	for(int i=0;i<n+m;i++){
		if(nn>0){
			s+="B";
			nn-=1;
		}
		if(mm>0){
			s+="G";
			mm-=1;
		}
	}
	cout<<s;
	 }
	 else{
		 for(int i=0;i<n+m;i++){
		 		if(mm>0){
		 			s+="G";
		 			mm-=1;
		 		}
		 		if(nn>0){
		 			s+="B";
		 			nn-=1;
		 		}
		 	}
		 cout<<s;
	 }
	return 0;
}
