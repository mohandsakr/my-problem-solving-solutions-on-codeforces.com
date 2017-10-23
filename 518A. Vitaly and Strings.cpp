//============================================================================
//problem link:
// Name        : .cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:
//============================================================================

#include <iostream>
#include<string>
using namespace std;
/*int getindex(string s,string s2 ){
	int  len =s.length();
	for(int i=0;i<len;i++){
		if(s[i]!=s2[i]){return i;
		break;}
	}
}*/
int main() {
string s,s2,s3;
cin>>s>>s2;
int len=s.length();

for(int i=len-1;i>=0;i--){
	if(s[i]=='z')
			{
				s[i]='a';

			}
				else{
						s[i]=s[i]+1;
						break;



				}
}

if(s<s2){
	cout<<s;
}
else{
	cout<<"No such string";
}
return 0;
}
