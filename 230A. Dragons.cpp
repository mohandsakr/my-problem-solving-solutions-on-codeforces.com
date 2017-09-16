//============================================================================
//problem link:http://codeforces.com/contest/230/problem/A
// Name        : .cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:Accepted
//============================================================================

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	vector<pair<int ,int> > pa;
	int s,n;
	cin>>s>>n;
	bool can=true;
 	 for(int i=0;i<n;i++){
		 int x,y;
		 cin>>x>>y;
		  pa.push_back(make_pair(x,y));
	 }
	 sort(pa.begin(),pa.end());
	 for(int i=0;i<n;i++){
		 if(s>pa[i].first){
			 s+=pa[i].second;
		 }

		 else{
			 can=0;
			 break;
		 }
	 		  }

if(can)cout<<"YES";else cout<<"NO";

 	return 0;
}
