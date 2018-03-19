#include<iostream>
#include<conio.h>
using namespace std;
class shape
{
	public:
		float x,y;
		void get_data()
		{
			cout<<"\nEnter x,y";
			cin>>x>>y;
		}
};
class rectangle:public shape
{
	public:
	void display_area()
	{
		cout<<"\n area of rectable is = "<<x*y;
	}
};
class triangle:public shape
{
	public:
	void display_area()
	{
		cout<<"\n area of triangle is = "<<0.5*x*y;
	}
};
int main()
{
	int a;
	rectangle ob1;
	triangle ob2;
	cout<<"Enter 1 or rectangle and 2 for triangle\n";
	cin>>a;
	if(a==1)
	{
		ob1.get_data();
		ob1.display_area();
	}
	else if(a==2)
	{
		ob2.get_data();
		ob2.display_area();
	}
	else
	cout<<"Invalid choice!!\n";
	getch();
}
