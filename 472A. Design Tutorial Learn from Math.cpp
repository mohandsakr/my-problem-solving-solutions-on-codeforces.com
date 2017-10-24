//============================================================================
//problem link:http://codeforces.com/problemset/problem/472/A
// Name        : A. Design Tutorial: Learn from Math.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
using namespace std;
const int N=1e6;
bool arr[N+5];
/*void seive(){
	arr[0]=1;
	arr[1]=1;
	for(int i=2;i<=N;i++){
		if(arr[i])continue;
		for(long long j=i*i;j<=N;j+=i){
			arr[j]=1;
		}
	}
}*/
void seive(){
arr[0]=1;
arr[1]=1;
for(int i=2;i<=N;i++){
	if(arr[i])continue;
	for(long long j=(long long)i*i;j<=N;j+=i){
		arr[j]=1;
	}
}

}
int main() {
	seive();
	int n ;
	cin>>n;
	int value1=(n>>1),value2=n-value1;
	while(arr[value1]==0||arr[value2]==0){
		++value1;
		value2=n-value1;
	}
	cout<<value1<<" "<<value2;
	return 0;
}
