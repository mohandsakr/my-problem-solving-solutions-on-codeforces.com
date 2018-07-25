//poblem link:http://codeforces.com/contest/431/problem/A
//status:accepted
//author: mohand sakr
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
int arr[4];
int result=0;
for(int i=0;i<4;i++){
	cin>>arr[i];
}

string s;
cin>>s;
int len=s.length();
for(int i=0;i<len;i++){
	int z=s[i]-'0';
	//cout<<z;
	result+=arr[z-1];
	
}
cout<<result;









	return 0;
}
