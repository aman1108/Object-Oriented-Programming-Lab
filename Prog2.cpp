#include<iostream>
#include<cmath>
using namespace std;

class Area
{
	public:
		int getArea(int r)
		{
			return (3.14*r*r);
		}
		int getArea(int a,int b)
		{
			return (a*b);
		}
		double getArea (int a,int b,int c)
		{
			double s=(a+b+c)/2;
			double a1; 
			a1 = sqrt(s*(s-a)*(s-b)*(s-c));
			return a1; 
		}
};

int main()
{
	Area a1,a2;
	cout<<a1.getArea(4)<<endl;
	cout<<a2.getArea(3,4,5)<<endl;
	cout<<a1.getArea(4,5)<<endl;
	return 0;
}

