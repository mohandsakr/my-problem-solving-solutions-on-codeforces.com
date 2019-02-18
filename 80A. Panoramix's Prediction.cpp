/*
*problem link:http://codeforces.com/problemset/problem/80/A
*status:accepted
*problem name:80A - Panoramix's Prediction
*/
#include<iostream>
using namespace std;

const int N= 55;
bool PrimeCheck  [N];
void seive()
{
PrimeCheck  [0]=1;  //  set zero as not prime
PrimeCheck  [1]=1; // set one as not prime
for(int i=2;i<=N;i++)
{
if(PrimeCheck  [i])continue;
for(long long j=(long long)i*i;j<=N;j+=i)  // the cast to long long is must here to avoid the runtime error.
{
PrimeCheck  [j]=1;
}
}

}
int nextprime(int n){
	int num=0;
for(int i=n+1;i<N;i++){
	if(!PrimeCheck[i]){
		num=i;
		break;
	}
}
return num;
	
}

int main(){

seive();
int n,m;
cin>>n>>m;
int x=nextprime(n);
if(x==m){
	cout<<"YES";
}
else {
	cout<<"NO";
	
}

// cout<<nextprime(3);


return 0;

}
