//============================================================================
//problem link:http://codeforces.com/contest/799/problem/A
// Name        : Carrot_Cakes.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style.
//status:accepted
//============================================================================

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	 int n,k,t,d;
	 cin>>n>>t>>k>>d;
	 int groups=(n+k-1)/k;
	 int oven1=0,oven2=d;
	 for(int i=0;i<groups;i++){
		 if(oven1<=oven2)oven1+=t;
		 else
			 oven2+=t;
	 }
	 if(max(oven1,oven2)<groups*t)
		 cout<<"YES";
	 else
		 cout<<"NO";
	return 0;
}
