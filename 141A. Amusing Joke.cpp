//============================================================================
//problem link:http://codeforces.com/problemset/problem/141/A
// Name        : A. Amusing Joke.cpp
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
string s,s2,s3,s4;
cin>>s>>s2>>s3;
s4+=s+s2;
sort(s4.begin(),s4.end());
sort(s3.begin(),s3.end());
if(s3==s4){
	cout<<"YES";
}
else{
	cout<<"NO";
}

 	return 0;
}
