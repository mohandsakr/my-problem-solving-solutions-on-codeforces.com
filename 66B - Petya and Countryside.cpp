
//problem name: 66B - Petya and Countryside
//status:accepted
//problem link:http://codeforces.com/contest/66/problem/B
//author:mohand sakr

#include <iostream>
using namespace std;
int arr[1005];
int solve(int n,int index){
	int right=0;
	int left=0;
	int rigthreference=arr[index];
	int leftreference=arr[index];
	for(int i=index;i<n;i++){
		if(arr[i]>rigthreference){
			break;
		}
		else{
			++right;
			if(arr[i]<rigthreference){
				rigthreference=arr[i];
				
			}
			
		}
	}
	for(int i=index-1;i>=0;i--){
		if(arr[i]>leftreference){
			break;
		}
		else{
			++left;
			if(arr[i]<leftreference){
				leftreference=arr[i];
				
			}
			
		}
	}
	return right+left;
}
int main() {
int n;
cin>>n;
for(int i=0;i<n;i++){
	cin>>arr[i];
}
int resultvalue=0;
int resultindex=0;
for(int i=0;i<n;i++){
	int value=solve(n,i);
	if(value>resultvalue){
		resultindex=i;
		resultvalue=value;
	}
	
	
	
}
cout<<resultvalue<<endl;

	return 0;
}