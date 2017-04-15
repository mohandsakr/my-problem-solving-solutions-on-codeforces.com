//============================================================================
//problem link :http://codeforces.com/problemset/problem/266/A
// Name        : Stones_on_the_Table.cpp
// Author      : 
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
    char arr[51];
    cin>>n>>arr;
    int t=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1])
            t++;
    }
    cout<<t;
}
