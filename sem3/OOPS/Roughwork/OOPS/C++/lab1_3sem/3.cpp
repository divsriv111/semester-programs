#include<iostream>
#include<conio.h>
using namespace std;
long facto(long n)
{
	if(n==1)
	return 1;
	else
	return n*facto(n-1);
}
int main()
{
	long n;
	cout<<"Enter a number\n";
	cin>>n;
	cout<<endl<<"Factorial is "<<facto(n);
	getch();
	return 0;
}
