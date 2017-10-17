//============================================================================
//problemm link:http://codeforces.com/gym/101575/problem/B
// Name        : .cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
char arr[3][3];
char arr2[3][3];
char result[3][3];
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cin>>arr[i][j];
	}
}
string s;

getline(cin,s);

for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cin>>arr2[i][j];
	}
}
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		char mat1=arr[i][j];
		char mat2=arr2[i][j];
		if(mat1==mat2){
			result[i][j]=mat1;
		}
		else if(mat1!=mat2&&mat1=='.'){
			result[i][j]=mat2;
		}
		else if(mat1!=mat2&&mat2=='.'){
					result[i][j]=mat1;
				}
		/*else if(mat1==mat2&&mat2=='.'){
			result[i][j]=mat1;
		}*/
		else{
			result[i][j]='X';
		}
	}
}

for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<result[i][j];
	}
	cout<<'\n';
}


	return 0;
}
