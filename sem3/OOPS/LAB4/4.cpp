#include<iostream>
#include<conio.h>
using namespace std;
void movie(char m[],int min=90)
{
	cout<<"\nMovie name is : "<<m;
	cout<<"\nRunning time is : "<<min;
}
int main()
{
	char m[50];
	int min;
	cout<<"Enter movie name\n";
	cin.getline(m,50);
	cout<<"\nEnter running time : press -1 for default\n";
	cin>>min;
	if(min==-1)
	movie(m);
	else movie(m,min);
	getch();
	return 0;
}
