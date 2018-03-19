#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
long double fact(int x)
{
	long double facto=1;
	for(int i=1;i<=x;i++)
	facto=facto*i;
	return facto;
}
int main()
{
	int i,n;
	long double sum=1;
	cout<<"Enter 'n' (number of terms)\n";
	cin>>n;
	for(int i=1;i<=n;i++)
	sum=sum+(i/fact(i));
	cout<<endl<<setprecision(5)<<sum;
	getch();
	return 0;
}
