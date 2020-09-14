#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	void getdata()
			{
				int p,q;
				cout<<"Enter the values:"<<endl;
				cin>>p>>q;
				x=p;
				y=q;
			}
		friend void sum(A n);
};
void sum(A a)
{
	int s=0;
	s=a.x+a.y;
	cout<<"Sum:"<<s<<endl;
}

int main()
{
	A a;
	a.getdata();
	sum(a);
	return 0;
}

