#include<iostream>
#include<conio.h>
using namespace std;
struct date{
	int date;
	int month;
	int year;
}ob1,ob2; 
int main()
{
	cout<<"ENter date int the formate DDMMYYYY";
	
	cout<<"\nEnter day";
	cin>>ob1.date;
	cout<<"\nEnter month";
	cin>>ob1.month;
	cout<<"\nEnter year";
	cin>>ob1.year;
	
	cout<<"\nEnter second date";
	cout<<"\nEnter day";
	cin>>ob2.date;
	cout<<"\nEnter month";
	cin>>ob2.month;
	cout<<"\nEnter year";
	cin>>ob2.year;
	
	if(ob1.date==ob2.date&&ob1.month==ob2.month&&ob1.year==ob2.year)
	cout<<"\nEQUAL";
	else cout<<"\nNOT EQUAL";
	getch();
	return 0;
}
