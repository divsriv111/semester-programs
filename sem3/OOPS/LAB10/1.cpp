#include<iostream>
#include<conio.h>
using namespace std;
class shape{
	double x,y;
	public:
		void getdata(){
			cout<<"\nEnter x and y\n";
			cin>>x>>y;
		}
		double return_x()
		{
			return x;
		}
		double return_y()
		{
			return y;
		}
		virtual void get_area()=0;
};
class triangle:public shape{
	public:
		void get_area()
		{
			getdata();
			cout<<"\nArea of triangle is :"<<0.5*return_x()*return_y();
		}
};
class rectangle:public shape{
	public:
		void get_area()
		{
			getdata();
			cout<<"\nArea of rectangle is :"<<return_x()*return_y();
		}
};
int main()
{
	int ch;
	shape *ob;
	cout<<"Enter your choice\n1)triangle area\n2)rectangle area\n";
	cin>>ch;
	if(ch==1)
	{
		triangle ob1;
		ob=&ob1;
		ob->get_area();
	}
	else if(ch==2)
	{
		rectangle ob1;
		ob=&ob1;
		ob->get_area();
	}
	else
	cout<<"\nInvalid choice!";
	
	getch();
	return 0;
}
