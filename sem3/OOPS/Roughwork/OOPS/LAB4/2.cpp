#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a1=1,a2=2,a3=3,a4=4;
	int *p1=&a1,*p2=&a2,*p3=&a3,*p4=&a4;
	int &r1=a1,&r2=a2,&r3=a3,&r4=a4;
	int **ap[]={&p1,&p2,&p3,&p4},ar[4]={r1,r2,r3,r4};
	cout<<"Normal intergers\n";
	cout<<a1<<a2<<a3<<a4;
	cout<<"\nWith the help of pointers\n";
	for(int i=0;i<4;i++)
	cout<<**ap[i];
	cout<<"\nWith the help of Reference\n";
	for(int i=0;i<4;i++)
	cout<<ar[i];
	getch();
	return 0;
}
