#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
class rectangle;
class polar{
	float radius,angle;
	public:
		polar()
		{
			radius=angle=0;
		}
		void getdata()
		{
			cout<<"Enter the radius\n";
			cin>>radius;
			cout<<"\nEnter the angle in degree\n";
			cin>>angle;
		}
		void display()
		{
			cout<<"\nRadius = "<<radius;
			cout<<"\nAngle = "<<angle;
		}
		friend void convert(polar ob1,rectangle ob2,int ch);
};
class rectangle{
	float x,y;
	public:
		rectangle()
		{
			x=y=0;
		}
		void getdata()
		{
			cout<<"\nEnter x\n";
			cin>>x;
			cout<<"\nEnter y\n";
			cin>>y;
		}
		void display()
		{
			cout<<"\nx = "<<x;
			cout<<"\ny = "<<y;
		}
		friend void convert(polar ob1,rectangle ob2,int ch);
};
void convert(polar ob1,rectangle ob2,int ch)
{
	if(ch==1)
	{
		ob2.x=ob1.radius*cos(ob1.angle);
		ob2.y=ob1.radius*sin(ob1.angle);
	}
	if(ch==2)
	{
		ob1.radius=sqrt(pow(ob2.x,2)+pow(ob2.y,2));
		ob1.angle=atan(ob2.y/ob2.x);
	}
}
int main()
{
	int ch;
	polar ob1;
	rectangle ob2;
	ob1.getdata();
	ob2.getdata();
	cout<<"\nEnter your choice \n1)polar to rectangle\n2) rectangle to polar\n";
	cin>>ch;
	convert(ob1,ob2,ch);
	if(ch==1)
	ob2.display();
	if(ch==2)
	ob1.display();
	getch();
	return 0;
}

