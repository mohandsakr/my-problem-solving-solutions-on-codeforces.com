/*
problem name: 151 A. Soft Drinking
status:accepted
problem link:http://codeforces.com/problemset/problem/151/A
autor :mohandsakr


*/



#include <iostream>
using namespace std;

int main() {
int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;

int a=k*l/nl;
int b=c*d;
int x= p/np;
cout<<min(a,min(b,x))/n;

	return 0;
}
