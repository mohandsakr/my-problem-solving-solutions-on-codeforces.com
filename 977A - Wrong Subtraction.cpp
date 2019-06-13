/*
* problem link:
* problem name:977A - Wrong Subtraction ;
* status: accepted 
* author :mohand sakr

*/

#include <iostream>
using namespace std;

int main() {
	long long n ,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		if(n%10==0){
			n/=10;
		}
		else {
			n-=1;
		}
	}
	
	
	cout<<n;


	return 0;
}
