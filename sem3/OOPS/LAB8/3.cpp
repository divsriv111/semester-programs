#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
char c[40];
class stringC{
	int len;
	char a[20];
	public:
		stringC(char x[])
		{
			strcpy(a,x);
		}
		friend void operator +(stringC ob1,stringC ob2);
		void display()
		{
			cout<<"\n"<<c;
		}
};
void operator +(stringC ob1,stringC ob2)
{
	strcpy(c,ob1.a);
	strcat(c,ob2.a);
}
int main()
{
	stringC ob1("HELLO "),ob2("WORLD!!");
	ob1+ob2;
	ob1.display();
	getch();
	return 0;
}
