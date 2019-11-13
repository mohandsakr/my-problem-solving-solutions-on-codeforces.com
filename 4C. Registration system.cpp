/*

problem name:4C. Registration system
problem link:https://codeforces.com/problemset/problem/4/C
status:accepted
author:mohand sakr


*/


#include <iostream>
#include<map>
using namespace std;

int main() {
 int n;
 cin>>n;
map<string,int> ma;

for(int i=0;i<n;i++){
	string s;
	cin>>s;
	if(!ma[s]){
		cout<<"OK"<<endl;
		++ma[s];
	}
	else {
				cout<<s+to_string(ma[s])<<endl;
		++ma[s];
	}
}



	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
