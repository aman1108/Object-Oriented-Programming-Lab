#include <iostream>
using namespace std;
class Complex
{
	float r;
	float c;
	public:
		Complex()
		{
			r=0;
			c=0;
		}
		Complex(float r1,float r2)
		{
			r=r1;
			c=r2;
		}

		void display()
		{
			cout<<r<<"+ ("<<c<<") j"<<endl;
		}

		Complex operator +(const Complex& a)
		{
			Complex com;
			com.r=this->r+a.r;
			com.c=this->c+a.c;
			return com;
		}
		
		Complex operator -(const Complex& a)
		{
			Complex com;
			com.r=this->r-a.r;
			com.c=this->c-a.c;
			return com;
		}
		
		Complex operator *(const Complex& a)
		{
			Complex com;
			com.r=this->r*a.r-(this->c*a.c);
			com.c=this->c*a.r+this->r*a.c;
			return com;
		}
		
		Complex operator /(const Complex& a)
		{
			Complex com,temp(a.c,(-1*a.r));
			float div= (a.c*a.c)+(a.r*a.r);
			if(div==0)
			{
				return com;
			}
			com=(*(this))*temp;
			com.c=com.c/div;
			com.r=com.r/div;
			return com;
		}
};

int main()
{
	Complex C1(100,10),C2(25,30);
	Complex C3=C1+C2;
	Complex C4=C1-C2;
	Complex C5=C1*C2;
	Complex C6=C1/C2;
	C3.display();
	C4.display();
	C5.display();
	C6.display();
	return 0;
}

