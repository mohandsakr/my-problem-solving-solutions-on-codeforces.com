//============================================================================
//problem link:http://codeforces.com/contest/427/problem/A
// Name        : PoliceRecruits.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
using namespace std;

int main() {
	 int n;
	 scanf("%d",&n);
	 int officersnow=0;
	 int crimes=0;
	 for(int i=0;i<n;i++){
		 int x;
		 scanf("%d",&x);
		 if(x==-1){
			 if(officersnow>0){
				 officersnow-=1;
			 }
			 else{
				 crimes+=1;
			 }

		 }
		 else {
			 officersnow+=x;
		 }

	 }
	 printf("%d",crimes);
	return 0;
}
