//============================================================================
//problem link :http://codeforces.com/problemset/problem/344/A
// Name        : Magnets.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted.
//============================================================================

#include <iostream>

using namespace std;

int main()
{
int NofMagnatics;
cin>>NofMagnatics;
 int counter=1;
 int arr[100000];
for(int i=0;i<NofMagnatics;i++){
cin>>arr[i];

}
for(int i=0;i<NofMagnatics-1;i++){
    if(arr[i]!=arr[i+1])
        counter++;
}
    cout<<counter<<endl;





}
