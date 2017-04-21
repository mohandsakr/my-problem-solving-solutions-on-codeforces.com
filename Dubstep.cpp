//============================================================================
//problem link :http://codeforces.com/problemset/problem/208/A
// Name        : Dubstep.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status: accepted
//============================================================================

#include <iostream>
#include<string>
using namespace std;
int main() {
string s1,s2;
cin>>s1;
while(s1.find("WUB")!=-1){
	int x=s1.find("WUB");
	if(x==0){
		s1.erase(0,3);
	}
	else{
	s1.replace(x,1," ");
	s1.erase(x+1,2);
	}
}
cout<<s1;




















	return 0;
}
