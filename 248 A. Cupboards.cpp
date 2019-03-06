/*

problem link:http://codeforces.com/contest/248/problem/A
problem name: 248 A. Cupboards
author:moahnd sakr
status : accepted.

*/

#include <iostream>
using namespace std;

int main() {

int n;
cin>>n;
int CountClosedrigthDoors=0;
int CountClosedleftDoors=0;
for(int i=0;i<n;i++){
	int x=0,y=0;
	cin>>x>>y;
	if(x)++CountClosedleftDoors;
	if(y)++CountClosedrigthDoors;
}
int offright=n-CountClosedrigthDoors;
int offleft=n-CountClosedleftDoors;
int a=min(offright,CountClosedrigthDoors);
int b=min(offleft,CountClosedleftDoors);


cout<<a+b<<endl;








	return 0;
}
