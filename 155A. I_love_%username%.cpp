/*
problem name:155A. I_love_%username%
problem link:http://codeforces.com/contest/155/problem/A
status:accepted
author :maohand sakr



*/

#include <iostream>
using namespace std;

int main() {

int n;
cin>>n;
int  past=0;
int min=1200;
int max=0;
int count=0;
for(int i=0;i<n;i++){
	 int x;
	 cin>>x;
	 if(!i){
	 	min=x;
	 	max=min;
	 
	 }
	 else {
	 	
	 	if(x>max){
	 		max=x;
	 		++count;
	 }
	 else if(x<min){
	 	++count;
	 	min=x;
	 	
	 }
	  
 
}}
cout<<count<<endl;




	return 0;
}
