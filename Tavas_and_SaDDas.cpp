//============================================================================
//problem link:http://codeforces.com/problemset/problem/535/B
// Name        : Tavas_and_SaDDas.cpp
// Author      : 
// Version     :
// Copyright   : use it under your responsibity
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================

#include <iostream>
#include<algorithm>
#include <vector>

using namespace std;
vector <int>v;

void x(int n){
	if(n>100000000){
		return ;
	}
	v.push_back(n*10+4);
	v.push_back(n*10+7);
	int w=0;
	w=v.size();
	x(v[w-1]);
	x(v[w-2]);
}
int main() {
int n;
cin>>n;
x(0);
sort(v.begin(),v.end());
int q=v.size();
for(int i=0;i<q;i++){
	if(v[i]==n)
		cout<<i+1;
}










	return 0;
}
