//============================================================================
//problem link:http://codeforces.com/contest/490/problem/A
// Name        : Team_Olympiad_2.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	int teams=0,t1=0,t2=0,t3=0;
	int arr[n];
	vector<int >one;
	vector<int >two;
	vector<int >three;

	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]==1){
			t1+=1;
			 one.push_back(i+1);
		}
		else if(arr[i]==2){
			two.push_back(i+1);
			t2+=1;
		}
		else{
			three.push_back(i+1);
			t3+=1;

		}
		}
 	teams=min(t1,min(t2,t3));
	cout<<teams<<'\n';
	for(int i=0;i<teams;i++){
		cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<'\n';

	}


	return 0;
}
