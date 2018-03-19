#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int xstrend(char s[],char t[])
{
	int i=0,j;
	while(s[i]!='\0')
	{
		if(s[i]==t[i])
		{
			j=0;
			while(t[i+j]!='\0'&&s[i+j]!='\0')
			{
				if()
				j++;
			}
		}
		i++;
	}
	return 0;
}
int main()
{
	char s[25],t[25];
	cout<<"Enter a String S\n";
	cin.getline(s,25);
	cout<<"Enter a String T\n";
	cin.getline(t,25);
	if(xstrend(s,t))
	cout<<endl<<"String T occured in String S ";
	else
	cout<<"\nNot occured";
	getch();
	return 0;
}
