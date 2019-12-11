/*
problem link:http://codeforces.com/contest/382/problem/A
problem name:A. Ksenia and Pan Scales
status:accepted
author :mohand sakr

*/

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	
	string s,s2;
	cin>>s;
	cin>>s2;
	string fst=s.substr(0,s.find('|'));
	string snd=s.substr(s.find('|')+1,s.length());
	int fstlen=fst.length();
	int sndlen=snd.length();

	int len2=s2.length();
	
	int total=len2+fstlen+sndlen;
  if(abs(fstlen-sndlen)<=len2&&total%2==0)
{
	 
 fst+=s2.substr(0,(total>>1)-fstlen);
 snd+=s2.substr((total>>1)-fstlen,(total>>1)-sndlen);
 		
 
		cout<<fst<<"|"<<snd<<endl;
	 
}
else {
	cout<<"Impossible"<<endl;
}
	

	
	return 0;
}
