//============================================================================
//problem link:http://codeforces.com/problemset/problem/271/A
// Name        : .cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isbuaty(int n){
	string s =to_string(n);
	int digt1=count(s.begin(),s.end(),s[0]);
	int digt2=count(s.begin(),s.end(),s[1]);
	int digt3=count(s.begin(),s.end(),s[2]);
	int digt4=count(s.begin(),s.end(),s[3]);
	if((digt1==1)&&(digt2=1)&&(digt3==1)&&(digt4==1))
		return 1;
	else
		return 0;

 }
int main() {
int n;
cin>>n;
++n;
while(!isbuaty(n)){
	++n;

}
cout<<n;










 	return 0;
}
