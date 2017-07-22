//============================================================================
//problem link:http://codeforces.com/contest/228/problem/A
// Name        : Is_your_horse_shoe_on_the_other_hoof.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
#include<set>
using namespace std;

int main() {
long long x;
set<long long>s;
for(int i=0;i<4;i++){
	cin>>x;
	s.insert(x);
}
cout<<4-s.size();
	return 0;
}
