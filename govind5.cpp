//============================================================================
// Name        : govind5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int mat[5][4],i,j,count,p=1,q=0;
	cout<<"enter matrix of 5x4";
	for(i=0;i<5;i++)
	{   cout<<endl;
		for(j=0;j<4;j++)
		{
			cin>>mat[i][j];
		}
	}
	for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
			{
				if(mat[i][j]!=0)
					count++;
			}
		}
	cout<<"5x4 matrix";
	for(i=0;i<5;i++)
			{  cout<<endl;
				for(j=0;j<4;j++)
				{
					cout<<mat[i][j];
				}
			}
	cout<<endl;
	cout<<"sparse matrix";
	int new1[count+1][3];
	new1[0][0]=5;new1[0][1]=4;new1[0][2]=count;
	for(i=0;i<5;i++)
			{
				for(j=0;j<4;j++)
				{
					if(mat[i][j]!=0)
						{new1[p][q]=i;new1[p][q+1]=j;new1[p][q+2]=mat[i][j];p=p+1;}
				}
			}
	for(i=0;i<count+1;i++)
			{   cout<<endl;
				for(j=0;j<3;j++)
				{
					cout<<new1[i][j];
				}
			}
	return 0;
}
