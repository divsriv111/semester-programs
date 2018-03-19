#include<iostream>
#include<conio.h>
using namespace std;
class abc{
	int a,b;
	public:
		abc(int x=0,int y=0)
		{
			a=x;b=y;
			display1();
			swap(&a,&b);
			display2();
		}
		void swap(int *x,int *y)
		{
			int temp;
			temp=*x;
			*x=*y;
			*y=temp;
		}
		void display1()
		{
			cout<<"before swapping : a="<<a<<" b="<<b<<endl;
		}
		void display2()
		{
			cout<<"after swapping : a="<<a<<" b="<<b<<endl;
		}
};
int main()
{
	abc ob(2,3);
	getch();
	return 0;
}
