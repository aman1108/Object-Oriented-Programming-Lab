#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the length of array";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int m;
	cout<<"Enter the index number to searched";
	cin>>m;
	try
	{
		if(m>n-1||m<0)
		{
			throw(m);
		}
		else
		{
			cout<<a[m];
	}
	}
	catch(int m)
	{
		cout<<"index out of range";
	}
	return 0;
}




