#include<iostream>
#include<conio.h>
using namespace std;
void add(int a,int b,int c,int d)
{
	float x;
	x=(a*d+b*c)/(b*d);
	cout<<endl<<x;
}
void sub(int a,int b,int c,int d)
{
	float x;
	x=(a*d-b*c)/(b*d);
	cout<<endl<<x;
}
void multi(int a,int b,int c,int d)
{
	float x;
	x=(a*c)/(b*d);
	cout<<endl<<x;
}
void div(int a,int b,int c,int d)
{
	float x;
	x=(a*d)/(b*c);
	cout<<endl<<x;
}
int main()
{
	int a,b,c,d;
	char op,ch;
	while(1){
	cout<<"Enter a,b\n";
	cin>>a>>b;
	cout<<"Enter Operator: (+ , - , * , /)\n";
	cin>>ch;
	cout<<"Enter c,d\n";
	cin>>c>>d;
	switch (ch)
	{
		case '+':
			add(a,b,c,d);
			break;
		case '-':
			sub(a,b,c,d);
			break;
		case '*':
			multi(a,b,c,d);
			break;
		case '/':
			div(a,b,c,d);
			break;
		case 5:
			return 0;
		default:
			cout<<"\nInvalid entry!!\n";
	}
	cout<<"\nDo you want to continue? (y/n)\n";
	cin>>op;
	if(op!='n'||op!='N')
	break;
	}
	getch();
	return 0;
}
