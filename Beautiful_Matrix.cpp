//============================================================================
//problem link:http://codeforces.com/problemset/problem/263/A
// Name        : Beautiful_Matrix.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status : accepted
//============================================================================

 #include <iostream>
using namespace std;

int main() {
	int arr[5][5];
	int ineed;
	int jneed;
	int tj=2;
	int ti=2;

	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++)
		{
			int x;
			cin>>x;
			if(x==1){
				ineed=i;
				jneed=j;
			}
			arr[i][j]=x;
		}


}
	int v1=abs(ineed-ti);
			int v2=abs(jneed-tj);
			int result=0;
			result=v1+v2;
			cout<<result;

	return 0;
}
