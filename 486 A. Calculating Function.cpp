//============================================================================
//problem link:http://codeforces.com/problemset/problem/486/A
// Name        : .cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status: accepted
//============================================================================

#include <iostream>
using namespace std;

int main() {
	long long n;
	cin>>n;
	if(n&1)
		cout<<-((n+1)>>1);
		else cout<<(n>>1);

 	return 0;
}
