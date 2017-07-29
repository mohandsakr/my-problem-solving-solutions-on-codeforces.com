//============================================================================
//problem link:http://codeforces.com/contest/686/problem/A
// Name        : Free_Ice_Cream.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
using namespace std;

int main() {
	long long x;
	int children=0;
	int n;
	cin>>n>>x;
	for(int i=0;i<n;i++){
		char sign;
		long long d;
		cin>>sign>>d;
		cin.ignore();
		if(sign=='-'){
			if(d>x){
				children+=1;
			}
			else{
				x-=d;

			}
		}
		else{
			x+=d;
		}
	}
	cout<<x<<" "<<children;






	return 0;
}
