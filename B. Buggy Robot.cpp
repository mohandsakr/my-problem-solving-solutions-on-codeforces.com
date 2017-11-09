//============================================================================
//problem link:http://codeforces.com/contest/888/problem/B
// Name        : .cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style.
//status:accepted
//============================================================================

#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
int n;
cin>>n;
string s;
int x=0,y=0;
cin>>s;
for(int i=0;i<n;i++){
if(s[i]=='U'){
++y;
}
else if(s[i]=='D'){
	--y;

}
else if(s[i]=='L'){
	--x;

}
else if(s[i]=='R'){
++x;
}





}

int val1=abs(x)+abs(y);
cout<<n-val1;


	return 0;
}
