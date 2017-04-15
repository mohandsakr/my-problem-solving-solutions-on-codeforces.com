//============================================================================
//problem link :http://codeforces.com/problemset/problem/379/A
// Name        : New_Year_Candles.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================
#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int val,reference;
	cin>>val>>reference;
	int  sum;
	sum=val;
	int rem=0;
	while(val/reference>0){
        rem=val%reference;
		val=val/reference;
		sum+=ceil(val);
         val+=rem;

	}
	cout<<sum;
	return 0;
}
