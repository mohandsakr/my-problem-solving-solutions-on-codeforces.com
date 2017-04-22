//============================================================================
//problem link ://http://codeforces.com/problemset/problem/546/A?csrf_token=4dfcd2645d353b846fc7b1b828988191
// Name        : Soldier_and_Bananas.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status: accepted
//============================================================================

#include <iostream>
#include<cmath>
using namespace std;

int main() {
	 long long  k,n,w;
	 long long cost=0,needed=0;
	 cin>>k>>n>>w;
	 for(int i=1;i<=w;i++){
		 	 cost+=(k*i);
	 }
	 if(cost<=n){
		 cout<<"0";
	 }
	 else{
		 needed=cost-n;
		 cout<<needed;
	 }


	return 0;
}
