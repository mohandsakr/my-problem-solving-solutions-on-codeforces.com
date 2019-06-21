/*

problem name:688B. Lovely Palindromes ;
problem link:http://codeforces.com/contest/688/problem/B
status:accept
author :mohand sakr

*/
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
string s;
cin>>s;
string s2=s;
reverse(s2.begin(),s2.end());
string s3=s+s2;
cout<<s3;
	return 0;
}
