#include<iostream>
#include<conio.h>
using namespace std;
class rectangle{
	int l,b,area,peri;
	public:
		void getdata()
		{
			cout<<"Enter lenght\n";
			cin>>l;
			cout<<"\nEnter breadth\n";
			cin>>b;
		}
		void areaOfrec()
		{
			area=l*b;
			cout<<"\nArea is = "<<area;
		}
		void perimeter()
		{
			peri=2*(l+b);
			cout<<"\nPerimeter is = "<<peri;
		}
		void display()
		{
			areaOfrec();
			perimeter();
		}
};
int main()
{
	rectangle ob;
	ob.getdata();
	ob.display();
	getch();
	return 0;
}
