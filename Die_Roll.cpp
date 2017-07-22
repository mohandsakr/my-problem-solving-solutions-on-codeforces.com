//============================================================================
//problem link:http://codeforces.com/contest/9/problem/A
// Name        : Die_Roll.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:acceopted
//============================================================================

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
int y, w;
cin>>y>>w;
int z=max(y,w);
int q=(6-z)+1;
if(q==1){cout<<"1/6";}
else if(q==2){cout<<"1/3";}
else if(q==3){cout<<"1/2";}
else if(q==4){cout<<"2/3";}
else if(q==5){cout<<"5/6";}
else if(q==6){cout<<"1/1";}
else if(q==0){cout<<"0/1";}

	return 0;
}
