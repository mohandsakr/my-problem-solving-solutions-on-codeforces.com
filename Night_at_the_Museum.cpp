//============================================================================
//problem link:http://codeforces.com/contest/731/problem/A
// Name        : Night_at_the_Museum.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================
#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int clockwise(char first,char last){
	int var=(int)last-first;
		while(var<0){
			var+=26;
		}

	 return var;
}
int counterclockwise(char first,char last){
	int var=(int)first-last;
	while(var<0){
		var+=26;
	}

 return var;
}


int main() {
	string s;
	cin>>s;
	int len,moves=0;
	char start='a',end;
	len=s.length();
	for(int i=0;i<len;i++){
		end=s[i];

		moves+=min(clockwise(start,end),counterclockwise(start,end));
			start=end;

	}
	cout<<moves;


	return 0;
}
