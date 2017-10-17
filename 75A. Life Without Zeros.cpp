//============================================================================
//problem link:http://codeforces.com/gym/101581/problem/A
// Name        : .cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================
#include<string>
#include <iostream>
using namespace std;
long long  removezero(long long a){
	string s=to_string(a);
	string s2;
	int n=s.length();
	for(int i=0;i<n;i++){
		if(s[i]!='0'){
			s2+=s[i];
		}
	}
	return stoll(s2);
}
int main() {
	long long a,b;
	cin>>a>>b;
	long long result1=a+b;
	long long result2;
	long long newa=removezero(a);
	long long newb=removezero(b);
	result2=removezero(result1);
	if((newa+newb)==result2){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}


 	return 0;
}
