//============================================================================
//problem link: http://codeforces.com/problemset/problem/520/A
// Name        : Pangram.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status : accepted
//============================================================================

 #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{    int n;
     string s;
     char j='A';
     cin>>n;
     cin>>s;
     for(int k=0;k<n;k++){
     s[k]=toupper(s[k]);
     }

if(n>=26){
for(int i=0;i<26;i++){
if(s.find(j)!=-1){
 j++;
}
else{
cout<<"NO";
return 0;
}
}
cout<<"YES";
}
else{
cout<<"NO";
    }

    return 0;
}
