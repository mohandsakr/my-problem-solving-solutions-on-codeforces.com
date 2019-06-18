/*

prblem link:http://codeforces.com/contest/47/problem/B
prblem name:47B. Coins;
status:accepted;
authour :moahnd sakr
*/


#include <iostream>
#include<string>
#include<map>
using namespace std;

int main() {
	string arr[3]={};
	for(int i=0;i<3;i++){
		
	cin>>arr[i];
	}
	
	map<char,int> ma;
	ma['A']=0;
	ma['B']=0;
	ma['C']=0;
	for(int i=0;i<3;i++)
	 if(arr[i][1]=='>'){
	 	++ma[arr[i][0]];
	 	--ma[arr[i][2]];
	 }else {
	 	--ma[arr[i][0]];
	 		 	++ma[arr[i][2]];

	 }
	 //cout<<ma['A']<<" "<<ma['B']<<"   "<<ma['C']<<endl;
	 
	 
	  if(ma['A']>ma['B']&&ma['B']>ma['C']){
	  	cout<<"CBA";
	  }
	  else if (ma['A']>ma['C']&&ma['C']>ma['B']){
	  	cout<<"BCA";
	  }
	  else if(ma['B']>ma['C']&&ma['C']>ma['A']){
	  	cout<<"ACB";
	  }
	  else if(ma['B']>ma['A']&&ma['A']>ma['C'])
	  cout<<"CAB";
	  else if(ma['C']>ma['B']&&ma['B']>ma['A'])\
	  cout<<"ABC";
	  else if(ma['C']>ma['A']&&ma['A']>ma['B'])
	  cout<<"BAC";
	  else{
	  	cout<<"Impossible";
	  	
	  }
 	return 0;
}
