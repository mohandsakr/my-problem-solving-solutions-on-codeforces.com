/*
problem link:https://codeforces.com/contest/879/problem/B
problem name:879B. Table Tennis
status:accepted
author:mohandsakr


*/

#include <iostream>
#include<algorithm>
#include<queue>
#include<map>
 
using namespace std;
 
int main() {
	 map < long long,long long> arr;
 
  long long n,k;
 cin>>n>>k;
 long long winer=0;
  queue<long long>q;
  
 for(long long i=0;i<n;i++){
 long long c;
 cin>>c;
 q.push(c);
  }
  winer=q.front();
  q.pop();
  long long times=0;
 if(n>2){
	for(int i=0;i<1000;i++){
		
		long long value=q.front();
		q.pop();
		if(value>winer){
			
			
		if(times==k)break;
 
			winer=(value);
			times=1;
			q.push(winer);
 
		}
		else {
			q.push(value);
			++times;
			if(times==k)break;
		}
		
		
	}
cout<<winer<<endl;
 
 
 }
 else{
 	long long value=q.front();
		q.pop();
 	winer=max(winer,value);
 	cout<<winer<<endl;
 }
  
 
 
 
 
 
 
	return 0;
}
