//============================================================================
//problem link :http://codeforces.com/problemset/problem/69/A
// Name        : YoungPhysicist.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================

#include <iostream>

using namespace std;

int main()
{
int co1;
int co2;
int co3;
int sum1=0;
int sum2=0;
int sum3=0;
int n;
cin>>n;
for(int i=0;i<n;i++){
cin>>co1>>co2>>co3;
sum1+=co1;
sum2+=co2;
sum3+=co3;

}
if(sum1==0&&sum2==0&&sum3==0)
    cout<<"YES";
    else{
    cout<<"NO";
}
}
