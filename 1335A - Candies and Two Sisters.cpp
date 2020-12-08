/**

problem link:https://codeforces.com/problemset/problem/1335/A
problem name: 1335A - Candies and Two Sisters
status:ACCEPTED
author :Mohand Sakr.
 

*/


#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
		
		long x;
		cin>>x;
		
		if(x>2){
			
			if(x&1){
				cout<<(x>>1)<<endl;
			}
			else {
				
				cout<<((x>>1)-1) <<endl;
				
			}
			
		}
		else{
			cout<<0<<endl;
		}
		
	}
	
	return 0;
}
