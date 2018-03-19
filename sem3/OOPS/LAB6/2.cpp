#include<iostream>
#include<conio.h>
using namespace std;
int a[5],i=0,c,b;
class A{
	public:
		A()
		{
			c++;
			a[i]=0;
			i++;
		}
};
class B{
	public:
		B()
		{
			b++;
			a[i]=1;
			i++;
		}
};
void showcount()
{
	cout<<"\nNo of Object of class A is created : "<<c<<endl;
	cout<<"\nNo of Object of class B is created : "<<b<<endl;
	cout<<"\nSequence of creation"<<endl;
	for(int i=0;i<5;i++)
	{
		if(a[i]==0)
		cout<<"Object of A is created"<<endl;
		else
		cout<<"Object of B is created"<<endl;
	}
}
int main()
{
	A o1,o2;
	B o3,o4;
	A o5;
	showcount();
	getch();
	return 0;
}
