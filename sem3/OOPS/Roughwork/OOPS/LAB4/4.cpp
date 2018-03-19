#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b;
	int &x=a;
	int &y=b;
	cin>>a>>b;
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<endl<<a<<"\n"<<b;
	getch();
	return 0;
}
