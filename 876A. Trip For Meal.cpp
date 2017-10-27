//============================================================================
//problem link:http://codeforces.com/contest/876/problem/A
// Name        : .cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
int n;
cin>>n;
int a,b,c;
cin>>a>>b>>c;
int x=min(a,min(b,c));
if(x==a||x==b||n==1){
cout<<(n-1)*min(a,b);
}else{
	cout<<min(a,b)+c*(n-2);
}

	return 0;
}
