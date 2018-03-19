#include<iostream>
#include<conio.h>
using namespace std;
class A{
	int count;
	static int sno;
	public:
		A()
		{
			showcount();
		}
		static void showcount()
		{
			cout<<"\nObject number :"<<sno<<endl;
			sno++;
		}
};
int A::sno=1;
int main()
{
	A o1,o2,o3,o4,o5;
	getch();
	return 0;
}
