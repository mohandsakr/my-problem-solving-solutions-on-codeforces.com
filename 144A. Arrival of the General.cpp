//============================================================================
//problem link:http://codeforces.com/problemset/problem/144/A
// Name        : .cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
#include<cmath>
using namespace std;

int main() {
int n;
int maxvalue=0;
int minvalue=1000;
int maxindex=0;
int minindex=0;
cin>>n;
for(int i=0;i<n;i++){
	int x;
	cin>>x;
if(x>maxvalue){
	maxindex=i;
	maxvalue=x;
}
 if(x<=minvalue){
	minindex=i;
	minvalue=x;
 }
}
//cout<<maxindex<<"   max"<<minindex<<"min\n";
if(maxindex>minindex){
	cout<<(maxindex-1)+(n-minindex)-1;
}
else{
	cout<<(maxindex-1)+(n-minindex);

}





	return 0;
}
