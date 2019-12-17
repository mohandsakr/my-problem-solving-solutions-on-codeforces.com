/*
problem name: 879A. Borya's Diagnosis.cpp
problem link:https://codeforces.com/contest/879/problem/A
status: accepted  
author:mohand sakr
*/
#include <iostream>
using namespace std;
long long theday(int s ,int d, int curday){
	 long long day=0;
	 int i=0;
	 while(true){
	  
	 	if((s+(i*d))>curday){
	 		
	 		day=(s+(i*d));
	 		
	 		break;
	 	}
	 	
	 	
	 	++i;
	 	
	 	
	 	
	 }
	return day;
	
}


int main() {
int n;
cin>>n;
int curday=0;
long long arr[n+1]={};
for(int i=1;i<=n;i++){
	
	int s,d;
	cin>>s>>d;
if(n>1){
	curday=theday(s,d,curday);
 	arr[i]=curday;
	
}

else{
	
 arr[i]=s;
	
}
	
}

cout<<arr[n];

	return 0;
}
