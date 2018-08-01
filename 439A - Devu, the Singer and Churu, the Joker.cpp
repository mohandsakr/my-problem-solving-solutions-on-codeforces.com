//problem link:http://codeforces.com/problemset/problem/439/A
//status:accepted
//author : mohand sakr
#include<iostream>
using  namespace std;
int main()
{

int n;
int k;
cin>>n>>k;
int sum=0;
for(int i=0;i<n;i++){
	int x;
	cin>>x;
	sum+=x;
}
int between=(n-1)*10;

if(sum+between>k) cout<<"-1";
else {
	int cu=(k-sum)/5;
	cout<<cu<<endl;
}
	return 0;
}
