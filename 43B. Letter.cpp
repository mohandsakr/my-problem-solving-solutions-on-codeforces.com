/*
problem link:https://codeforces.com/contest/43/problem/B
probelm name:43B. Letter
status:accepted
author : mohand sakr.

*/
#include <iostream>
#include<string>
#include<map>
using namespace std;

int main() {
	string s,s2;
getline(cin,s);
getline(cin,s2);
map<char,int> ma;
int len=s.length();
for(int i=0;i<len;i++){
	++ma[s[i]];
}
int counter=0;
int len2=s2.length();
int chars=0;
for(int i=0;i<len2;i++){
	if(s2[i]!=' '){
		++chars;
		if(ma[s2[i]]>0){
			++counter;
			--ma[s2[i]];
		}
		
	}
}

	
if(chars==counter){
	cout<<"YES"<<endl;
}

else {
	cout<<"NO"<<endl;
	
}
return 0;
}
