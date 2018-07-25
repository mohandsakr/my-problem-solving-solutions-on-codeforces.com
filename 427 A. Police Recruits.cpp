
//problem link:http://codeforces.com/contest/427/problem/A
//author:mohand sakr
//status: accepted.

#include <iostream>
using namespace std;

int main() {

int n;
cin>>n;
int curoff=0;
int untreated=0;
for(int i=0;i<n;i++){
	int x;
	cin>>x;
	if(x>0){
		curoff+=x;
		
	}
	else {
		if(curoff<1){
		++untreated;
		}
		else {
			--curoff;
		}
	}
}
cout<<untreated;
	return 0;
}
