/*

problem name:785A. Anton and Polyhedrons
problem link: https://codeforces.com/problemset/problem/785/A
status:accepted
author:mohand sakr


*/


#include <iostream>
#include<map>
using namespace std;

int main() {
 int n;
 cin>>n;
map<string,int> ma;
ma["Tetrahedron"]=4;
ma["Cube"]=6;
ma["Octahedron"]=8;
ma["Dodecahedron"]=12;
ma["Icosahedron"]=20;

long sum=0;


for(int i=0;i<n;i++){
	string s;
	cin>>s;
	sum+=ma[s];

	
	 
}
cout<<sum<<endl;



	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
