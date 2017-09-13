//============================================================================
//problem link:http://codeforces.com/problemset/problem/467/A
// Name        : A. George and Accommodation.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accept
//============================================================================

#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
int count=0;
for(int i=0;i<n;i++){
	int a,b;
	cin>>a>>b;
	if(b-a>=2)
		++count;

}
cout<<count;





	return 0;
}
