#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"Enter number of rows\n";
	cin>>r;
	cout<<"Enter number of columns\n";
	cin>>c;
    int **a=new int*[r];
	int **b=new int*[r];
	int **sub=new int*[r];
	int **add=new int*[r];
	for(int i=0;i<r;i++)
	{
		a[i]=new int[c];
		b[i]=new int[c];
		sub[i]=new int[c];
		add[i]=new int[c];
		
	}
	cout<<"Enter the elements of matrix 1 :\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter the elements of matrix 2 :\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"Addition matrix is : \n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			add[i][j]=a[i][j]+b[i][j];
			cout<<add[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"Subtraction Matrix is : \n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			sub[i][j]=a[i][j]-b[i][j];
			cout<<sub[i][j]<<" ";
		}
		cout<<"\n";
	}
	for(int i=0;i<r;i++)
	{
		delete a[i];
		delete a;
		delete b[i];
		delete b;
		delete add[i];
		delete add;
		delete sub[i];
		delete sub;}
	return 0;}

