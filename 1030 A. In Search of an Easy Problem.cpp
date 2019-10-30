/*
problem name:1030 A.In Search of an Easy Problem;
probkem link:https://codeforces.com/contest/1030/problem/A
status:accepted
author :moahnd sakr

*/
#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		sum+=x;
		
	}
	
	if(sum){
		cout<<"HARD"<<endl;
	}
	else {
		cout<<"EASY"<<endl;
	}

	return 0;
}
