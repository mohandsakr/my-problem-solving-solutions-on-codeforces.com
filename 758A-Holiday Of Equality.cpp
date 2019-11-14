/*

problem name:758A - Holiday Of Equality
problem link:https://codeforces.com/problemset/problem/758/A
satus:accepted


*/


#include <iostream>
#include<algorithm>
using namespace std;

int main() {
 	int n;
	cin>>n;
	int arr[n];
	int maxi=0;
	long long answer=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		maxi=max(arr[i],maxi);
	}
		for(int i=0;i<n;i++){
          answer+=maxi-arr[i];

			
		}
		cout<<answer<<endl;
	
	
	return 0;
}
