#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class salesperson;
class sale{
	int amt,s_no;
	char day[10];
	friend void display(sale,salesperson);
	public:
		sale(int a=0,int s=0,char d[]="SUNDAY")
		{
			amt=a;
			s_no=s;
			strcpy(day,d);
		}
};
class salesperson{
	int s_id;
	char surname[10];
	friend void display(sale,salesperson);
	public:
		salesperson(int s=0,char sn[]="XYZ")
		{
			s_id=s;
			strcpy(surname,sn);
		}
};
void display(sale a,salesperson b)
{
	cout<<"Sales id              : "<<b.s_id<<endl;
	cout<<"Surname               : "<<b.surname<<endl;
	cout<<"Sales person's number : "<<a.s_no<<endl;
	cout<<"Sales day             : "<<a.day<<endl;
	cout<<"Sales amt             : "<<a.amt<<endl;
}
int main()
{
	sale o1(100000,987654321,"Wednesday");
	salesperson o2(100,"Verma");
	display(o1,o2);
	getch();
	return 0;
}
