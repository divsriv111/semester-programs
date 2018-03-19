#include<iostream>
#include<conio.h>
using namespace std;
class B;
class A{
	int cno,zip;
	public:
		A()
		{
			cno=0;
			zip=0;
		}
	void getdata()
	{
		cout<<"Enter customer number\n";
		cin>>cno;
		cout<<"\nEnter zip number\n";
		cin>>zip;
	}
	friend void func(A a,B b);
};
class B{
	string city,state;
	public:
	B()
	{
		city="bhopal";
		state="madhya pradesh";
	}
	void getdata()
	{
		cout<<"\nEnter City name\n";
		cin>>city;
		cout<<"\nEnter state name \n";
		cin>>state;
	}
		friend void func(A a,B b);
};
void func(A a,B b)
{
	cout<<"\nCustomer number   :"<<a.cno<<endl;
	cout<<"Zipcode           :"<<a.zip<<endl;
	cout<<"city              :"<<b.city<<endl;
	cout<<"State             :"<<b.state<<endl;
}
int main()
{
	A ob1;
	B ob2;
	ob1.getdata();
	ob2.getdata();
	func(ob1,ob2);
	return 0;
}
