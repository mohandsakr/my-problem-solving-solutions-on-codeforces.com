/*

problem name:1257 A.Two Rival Students
problem link:https://codeforces.com/contest/1257/problem/A;
status:accepted;
author:mohand sakr;

*/


#include <iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main() {
 
int t;
cin>>t;
while(t--){
int n,x,a,b;
cin>>n>>x>>a>>b;
int curdist=abs(a-b);
vector<int> vect;
vect.push_back(curdist);
if(x){
if(a<=b){
	if(a>1){
		int newa=a;
		int newb=b;
		if((x>a-1)){
			newa=newa-1;
			x-=newa;
			newa=1;
			newb=(newb+x<=n)?newb+x:n;
		}
		else {
			newa=a-x;
			
		}
		
		vect.push_back(abs(newa-newb));
 
	}
	
	else {
		int newa=a;
		int newb=(x+b<=n)?x+b:n;
		vect.push_back(abs(newa-newb));
 
	}
 
}
 
else {
		if(b>1){
		int newa=a;
		int newb=b;
		if((x>b-1)){
			newb=newb-1;
			x-=newb;
			newb=1;
			
			newa=(newa+x<=n)?newa+x:n;
			
		}
		else {
			newb=b-x;
			
		}
		
		vect.push_back(abs(newa-newb));
 
	}
	
	else {
		int newb=b;
		int newa=a;
		if((x+a)<n){
			newa=x+a;
		}
		else{
			newa=n;
		}
 			
		
		vect.push_back(abs(newb-newa));
 
	}
	
	
}
}
 
 
 
 
 
 
 
 
int len=vect.size();
 
sort(vect.begin(),vect.end());
cout<<vect[len-1]<<endl;
}
 
 
 
 
	return 0;
}
