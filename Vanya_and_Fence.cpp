//============================================================================
//problem link :http://codeforces.com/contest/677/problem/A
// Name        : Vanya_and_Fence.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n,h;
	cin>>n>>h;
	int width=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		if(x>h){
			width +=2;

		}
		else
			width +=1;
	}
	cout<<width;
	return 0;
}
