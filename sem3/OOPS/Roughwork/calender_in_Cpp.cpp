#include<iostream>
#include<conio.h>
#include<cstring>
#include<stdio.h>
#define MAX 12
using namespace std;
int _day,_month,_year;
char month[]={'JANUARY'};//,"FABUARY"},{"MARCH"},{"APRIL"},{"MAY"},{"JUNE"},{"JULY"},{"AUGUST"},{"SEPTEMBER"},{"OCTOBER"},{"NOVEMBER"},{"DECEMBER"};
//int find_month(char a[])
/*{
	for(int i=1;i<=MAX;i++)
	{
		if(!(strcmp(a[],month[i])))
		return i;
	}
	return -1;
}*/
void upper(char *str[])
{
	int l=strlen(*str);
	for(int i=0;i<l;i++)
	{
		*str[i]=toupper(*str[i]);
	}
}
int isleap(int year)
{
	if(year%400==0&&year%4==0&&(!(year%100==0)))
	return 1;
	else return 0;
}
int day(int month)
{
	switch(month)
	{

		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
		case 11:
			return 31;
		case 4:
		case 6:
		case 8:
		case 10:
		case 12:
			return 30;
		case 2:
			if(isleap(_year))
			return 29;
			else
			return 28;	
		default:
			system("CLS");
			cout<<"You have entered wrong month!! Try again.....\n";
	}
}
void display(){
}
int main()
{
	int a;
	cout<<".............................WELCOME TO CALENDER CPP............................\n\n";
	cout<<"Enter your choice\n";
	cout<<"1)to enter year\n2)exit\n";
	cin>>a;
	switch(a)
	{
		case 1:
			cout<<"Enter year :\n";
			puts(month);
			cin>>_year;
		default:
			cout<<"fuck you!";
	}
	getch();
	return 0;
}
