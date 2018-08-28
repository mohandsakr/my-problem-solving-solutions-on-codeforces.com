//problem link:http://codeforces.com/contest/981/problem/A
//status:accepted
//author:moahnd sakr
//problem name:981 A. Antipalindrome
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
bool ispalindron(string s){
	string y=s;
	reverse(s.begin(),s.end());
	return y==s;
}




int main() {
	string s;
	cin>>s;
	int len=s.length();
	int result=0;
	for(int i=0;i<=len;i++){
		for(int j=0;j<=len;j++){
			string a=s.substr(i,j);
			if(!ispalindron(a)){
				int l=a.length();
				result=max(result,l);
			}
		}
		
		
	}
	cout<<result;
	
	return 0;
}
