#include<iostream>
using namespace std;
class testconstructor
{
	int a;
	public:
		static int count;
	
	testconstructor()
	{
		cout<<"default constructor is called and value of a is :  "<<a<<endl;
		count++;
	}
	testconstructor(int a)
	{
	cout<<"parameterised constructor is called and value of a is : "<<a<<endl;
		count++;
	}
	testconstructor(testconstructor &b)                                
	{
		cout<<"copy constructor is called  and value of a is : "<<b.a<<endl;      
		count++;
	}
	~testconstructor()
	{
		cout<<"destructor is called "<<count--<<endl;
	}
};
int testconstructor::count;
int main()
{
	testconstructor ob1;                                          
	testconstructor ob2(2);                                    
	testconstructor ob3(ob2);                              
	cout<<"number of objects created is : "<<testconstructor::count<<endl;
}



