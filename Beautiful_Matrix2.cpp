//============================================================================
//problem link:http://codeforces.com/contest/263/problem/A
// Name        : Beautiful_Matrix2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status : accepted .
//============================================================================
#include<cmath>
#include <iostream>
using namespace std;

int main() {
	int arr[5][5];
	int goal_x=2;
	int goal_y=2;
	int x;
	int y;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++)
		{
			cin>>arr[i][j];
			if((arr[i][j])==1){
				x=i;
				y=j;

			}
		}
	}
	cout<<abs(goal_x-x)+abs(goal_y-y);

	return 0;
}
