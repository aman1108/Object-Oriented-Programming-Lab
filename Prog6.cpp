#include<iostream>
using namespace std;
class A
{
	private:
		int a;
	protected:
		void setvalue(int k)
		{
			a=k;
		}
		void display()
		{
			cout<<"The output is: "<<a;
		}
};

class B: public A
{
	public:
		void setdata(int x)
		{
			setvalue(x);
		}
		void setdisplay()
		{
			display();
		}
};
int main()
{
	B obj;
	obj.setdata(4);    
	obj.setdisplay();           
	return 0;
}

