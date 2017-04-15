//============================================================================
//problem link : http://codeforces.com/problemset/problem/723/A
// Name        : The_New_Year_Meeting_Friends.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================

 #include <iostream>
using namespace std;

int main() {
	 int n,k;
	 cin>>n>>k;
	 int resttime=240-k;
	 int count=0;
	 for(int i=1;i<=n;i++){
		 if(resttime>=i*5){
			 resttime=resttime-i*5;
			++count;
		 }else{
			 break;
		 }

	 }
	 cout<<count;
	return 0;
}
