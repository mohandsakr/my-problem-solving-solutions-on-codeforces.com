/*
problem link: https://codeforces.com/contest/514/problem/A
problem name:514A. Chewbaсca and Number
status:ACCEPTED
author :Mohand Sakr.
*/



#include <iostream>
#include<string>
using namespace std;

int main() {

string s,s2;
cin>>s;

s2=s;


int len=s.length();


for(int i=0;i<len;i++){

if(i){
if(9-(s[i]-'0')>=0 &&(9-(s[i]-'0'))<s[i]-'0'){
	
	s[i]=(9-(s[i]-'0'))+'0';

}
}
else {
	if(9-(s[i]-'0')>0 &&(9-(s[i]-'0'))<s[i]-'0'){
	
	s[i]=(9-(s[i]-'0'))+'0';

}
}



}


if(s<s2)
cout<<s<<"\n";
else {
	cout<<s2<<"\n";
}

	return 0;
}
