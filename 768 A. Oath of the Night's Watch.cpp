//problem link : http://codeforces.com/contest/768/problem/A
//problem name : A. Oath of the Night's Watch
//status : accepted
//note : use the code under your responsiblity.
//author : mohand sakr.


#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
vector<int> se;
int answer=0;
	for(int i=0;i<n;i++)
	{
		
		int x;
		cin>>x;
		se.push_back(x);
		
		
	}
	sort(se.begin(),se.end());
	int min=se[0];
	int max=se[n-1];
	for(int i=0;i<n;i++){
		if(se[i]>min&&se[i]<max){
			++answer;
		}
	}
	cout<<answer<<endl;
	return 0;
}
