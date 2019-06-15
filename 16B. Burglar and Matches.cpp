/*
problem name:16B. Burglar and Matches
problem link:http://codeforces.com/contest/16/problem/B
status:accepted
 author:mohandsakr
*/

#include <iostream>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;
	bool comp(pair<int,int> p1,pair<int ,int>p2){
		return p1.second>p2.second;
	}
int main() {
unsigned long long sum=0;
 	int n,m;
	cin>>n>>m;
 pair<int ,int>  pa [m];
	
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		  pa[i].first=x;
		  pa[i].second=y;
	}
	
	sort(pa ,pa+sizeof pa/sizeof *pa,comp);
 
 
 	int got=n;
	int len=m;
	for(int i=0;i<len&&got>0;i++){
			int second=pa[i].second;
			int first=pa[i].first;
		if(pa[i].first<=got){
		
			 
			sum+= first* second ;
			got-= first;
			
		}
		else {
			sum+=got*(second);
			got-=got;
		}
		
		
	}
	cout<<sum<<endl; 
	return 0;
}
