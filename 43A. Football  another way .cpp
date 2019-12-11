/*
problem name:43A. Football
problem link:https://codeforces.com/contest/43/problem/A
status:acceped 
author:moahnd sakr
*/

#include <iostream>
#include<string>
#include<map>
using namespace std;

int main() {
	
	int n;
	cin>>n;

map<string,int> ma;
map<string,int> :: iterator it;

for(int i=0;i<n;i++)
{
	string s;
	cin>>s;
	++ma[s];
}
if(ma.size()>1){
it=ma.begin();
int first=it->second;
it++;
int second=it->second;
if(first>second){
	cout<<ma.begin()->first<<endl;}

	else
	{
		cout<<it->first<<endl;
	}
}
else {
	it=ma.begin();
cout<<it->first<<endl;

}
	

 
	return 0;
}
