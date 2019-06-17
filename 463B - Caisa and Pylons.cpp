/*
problem link:http://codeforces.com/contest/463/problem/B
problem name:436B - Caisa and Pylons 
status:accepted
author:moahnd sakr
*/

#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
int energy=0;
long long money=0;
int previoushieght=0;
for(int i=0;i<n;i++){
	int x;
	cin>>x;
	energy+=(previoushieght-x);
	if(energy<0){
		money+=abs(energy);
		energy=0;
	}
	previoushieght=x;
	
}

cout<<money;
	return 0;
}
