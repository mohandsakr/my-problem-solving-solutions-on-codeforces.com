//============================================================================
//problem link : http://codeforces.com/problemset/problem/707/A
// Name        : Brain's_Photos.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================
#include <iostream>
using namespace std;

int main() {
	int m,k;
	int count=0;
	cin>>m>>k;
	string arr[m][k];
	for(int i=0;i<m;i++){
		for(int j=0;j<k;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<m;i++){
	 for(int j=0;j<k;j++){
		if(arr[i][j]=="C"||arr[i][j]=="M"||arr[i][j]=="Y")
			{
				count++;
			}
		  }
		}
	if(count>0)
	{
		cout<<"#Color";
	}
	else
	{
	cout<<"#Black&White";
	}
	return 0;
}
