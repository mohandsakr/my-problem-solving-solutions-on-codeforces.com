//============================================================================
//problem link : http://codeforces.com/problemset/problem/131/A
// Name        : cAPS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int len=s.length();
	int counter=0;
	if(len==1){
		if(isupper(s[0]))
			s[0]=tolower(s[0]);
		else if(islower(s[0])){
			s[0]=toupper(s[0]);
		}
		cout<<s;
	}
	else{
	for(int i=1;i<len;i++)
	{
		if(isupper(s[i]))
			counter++;
	}
	if(counter+1==len){
		for(int i=0;i<len;i++){
			if(isupper(s[i])){
				s[i]=tolower(s[i]);
			}
			else if(islower(s[i]))
			{
				s[i]=toupper(s[i]);
			}
		}
	}

		cout<<s;
	}



return 0;
}
