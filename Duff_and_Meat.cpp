//============================================================================
//problem link :http://codeforces.com/problemset/problem/588/A
// Name        : Duff_and_Meat.cpp
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
    int n;
    int amount,price;
    int minvalue=100;
    int sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>amount>>price;
    minvalue=min(minvalue,price);
    sum+=minvalue*amount;

    }
    cout<<sum<<endl;
}
