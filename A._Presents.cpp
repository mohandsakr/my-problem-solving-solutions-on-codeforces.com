//============================================================================
//problem link :
// Name        : _Presents.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>

using namespace std;

int main()
{
    int numOFperson;
    int arr1[101];
    int arr2[101];
    cin>>numOFperson;
    for(int i=0;i<numOFperson;i++){

    cin>>arr1[i];


    }
for(int j=0;j<numOFperson;j++){
    arr2[arr1[j]]=j+1;

    }
    for(int x=1;x<=numOFperson;x++){
        cout<<arr2[x]<<" ";
    }

}
