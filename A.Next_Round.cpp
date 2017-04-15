//============================================================================
//problem link : http://codeforces.com/problemset/problem/158/A
// Name        : Next_Round.cpp
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
    int numOFCases;
    int thereferencevalue;
    int counter=0;
    int arr[51];
    cin>>numOFCases;
    cin>>thereferencevalue;
    for(int i=0;i<numOFCases;i++){
        cin>>arr[i];

        }
    for(int i=0;i<numOFCases;i++){
        //thereferencevalue=arr[thereferencevalue];
        if((arr[i]>=arr[thereferencevalue-1])&&arr[i]!=0){
            counter+=1;

        }



}
cout<<counter;
}
