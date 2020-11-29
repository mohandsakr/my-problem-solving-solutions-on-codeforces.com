/*

problem link: https://codeforces.com/contest/456/problem/A .
problem name:456A.Laptops 
status:ACCEPTED
author :Mohand Sakr.

*/





#include <iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<set>


using namespace std;

int main() {

int n;
cin>>n;
map<int,int> ma;

vector<int> keys;

for(int i=0;i<n;i++){
	
	int x,y;
	cin>>x>>y;
	ma[x]=y;
	keys.push_back(x);
	
}


 
sort(keys.begin(),keys.end());

bool check=0;
for(int i=0;i<n-1;i++)

	{
		if(ma[keys[i]]>ma[keys[i+1]])
		check=1;
		
	
}

	if(check)
		cout<<"Happy Alex"<<endl;
		else {
			cout<<"Poor Alex"<<endl;
		}
		


	return 0;
}


