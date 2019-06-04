
/*
problem link:http://codeforces.com/problemset/problem/705/A
status: accepted
problem name:705A. Hulk

*/

#include <iostream>
#include<string>
using namespace std;

int main() {
 int n;
 cin>>n;
 string s="";
 
 for(int i=0;i<n;i++){
 	 if(i%2==0&&i!=n-1){
 	 	s+="I hate that ";
 	 }
 	 else if(i%2==1&&i!=n-1){
 	 	s+="I love that ";
 	 }
 	 else if(i%2==0){
 	 		s+="I hate ";
 	 }
 	 	
 	 else if(i%2==1){
 	 	s+="I love ";
 	 }
  
 }
 s+="it";
 cout<<s<<endl;
 
 
 
 	return 0;
}
