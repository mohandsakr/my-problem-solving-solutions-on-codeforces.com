//============================================================================
//problem link:http://codeforces.com/contest/831/problem/B
// Name        : Keyboard_Layouts.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use this under your responsiplity
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================

#include <iostream>
#include<string>
using namespace std;

int main() {
string s,s2;
string target;
string result="";
cin>>s;
cin>>s2;
cin>>target;
int len=target.length();
  for(int i=0;i<len;i++){
	if(isupper(target[i])){
		target[i]=tolower(target[i]);
		int index=s.find(target[i]);
		result+=toupper(s2[index]);
	}
	else if(islower(target[i])){
		int index=s.find(target[i]);
		result+=s2[index];

	}
	else {
		result+=target[i];
	}

}
cout<<result;



	return 0;
}
