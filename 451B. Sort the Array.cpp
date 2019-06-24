/*
problem name: 451B. Sort the Array.
status:Tle 
problem link:http://codeforces.com/contest/451/problem/B
author :mohand sakr.
*/
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> vect;
 	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		vect.push_back(x);
		
	}
   	
	 if(is_sorted(vect.begin(),vect.end()))
	{
		cout<<"yes\n";
		cout<<"1 1\n";
        	}
	else {
 		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				vector<int> vect2=vect;
			 if(i<j){
 for(int i=0;i<=n;i++){
			 }
			 reverse(vect2.begin()+i,vect2.begin()+j);
			  
			 	if(is_sorted(vect2.begin(),vect2.end()))
			{
				cout<<"yes\n";
				if(i<j){
					cout<<++i<<" "<<j<<"\n";
				}
				else {
					cout<<++j<<" "<<++i<<"\n";
				}
				
				return 0;
	}
				
		 
			}
		}
 		}
				cout<<"no\n";

	}
	
	
	
	
	
	return 0;
}
