/*
problen name :688A. Opponents
prblem link:http://codeforces.com/contest/688/problem/A
status:accept
author :moahnd sakr
*/

#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
int n,d;
cin>>n>>d;
string reference="" ;
for(int i=0;i<n;i++){
	reference+='1';
}
string previous="";
int count=0;
vector<string> vect1;
vector<int> vect;

for(int i=0;i<d;i++)
{
	string x;
	cin>>x;
	if((x==reference)){
		vect.push_back(count);
		count=0;
		
 	}
	else {
		

		++count;
 		
	}
}
vect.push_back(count);
int len=vect.size();

if(len){
sort(vect.begin(),vect.end());
cout<< vect[vect.size()-1]  <<endl; 
	
}
else {
	cout<<count<<endl;
}


	return 0;
}
