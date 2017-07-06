//============================================================================
//problem link:
// Name        : Anton_and_Danik.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================

#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	int x=count(s.begin(),s.end(),'A');
	int y=count(s.begin(),s.end(),'D');
	if(x>y)
		cout<<"Anton";
	else if(y>x)
		cout<<"Danik";
	else if(x==y){
		cout<<"Friendship";
	}





	return 0;
}
