#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,m;
	int &a=m,&b=n;
	cin>>m>>n;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<endl<<"after swapping through refrence variables : "<<a<<endl<<b;
	getch();
	return 0;
}
