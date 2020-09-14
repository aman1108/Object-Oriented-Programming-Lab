P#include<iostream>
using namespace std;
template <class t1>
class A
{
	public:
	 void sort(t1 a[],int n)
	 {
		t1 temp;
	    int j;
	    for(int i=1; i<n; i++)
	  {
		temp=a[i];
		j=i-1;
		while((temp<a[j]) && (j>=0))
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	  }
	  cout<<"\nArray after sorting : \n";
	  for(int i=0; i<n; i++)
	 {
		cout<<a[i]<<" ";
	 }	
	 }
};

int main()
{
	int a[]={2,5,3,7,6};
	float b[]={2.5,4.7,3.6,7.9,5.7};
	A <int>c;
	A <float>d;
	c.sort(a,5);
	d.sort(b,5);
	return 0;
}

