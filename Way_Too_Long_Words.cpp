//============================================================================
//problem link :http://codeforces.com/problemset/problem/71/A
// Name        : Way_Too_Long_Words.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================

 #include <bits/stdc++.h>


using namespace std;
char thwword[101];
int len=0;
void result(){
    cout<<thwword[0]<<(len-2)<<thwword[len-1]<<'\n';
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>thwword;
    len=strlen(thwword);

    if(len>10){
        result();
    }
    else{
    cout<<thwword<<'\n';

    }
    }

    return 0;
}
