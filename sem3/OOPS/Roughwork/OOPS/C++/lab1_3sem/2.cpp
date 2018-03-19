#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,l=0;
	cout<<"Enter a number(upto 5digit)\n";
	cin>>n;
	while(n!=0)
	{
		l++;
		n=n/10;
	}
	cout<<endl<<l<<" Digits";
	getch();
	return 0;
}
