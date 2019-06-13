/*
*
*
*
*
problem name :339B. Xenia and Ringroad .
problem link:http://codeforces.com/problemset/problem/339/B
status:accept
author :mohand sakr.
*
*
*
*/

#include <iostream>
using namespace std;

int main() {
	int n,m;
	cin>>n;
	cin>>m;
	int current=1;
	unsigned long long moves =0;
	for(int i=0;i<m;i++){
		int goal;
		cin>>goal;
		if(goal-current>=0){
			moves+=goal-current;
			 current=goal;
		}
		else {
			moves+=goal-current+n;
			current=goal;
		}
	}
	cout<<moves;


	return 0;
}
