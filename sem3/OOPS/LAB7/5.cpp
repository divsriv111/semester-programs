#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#define MAX 200
using namespace std;
int main()
{
	char a[MAX],ch;
	int line=0,space=0,lenght,i=0;
	cout<<"Enter the string : put '~' to terminate string\n";
	while(1)
	{
		ch=getch();
		putch(ch);
		if(ch=='~')
		break;
		if(ch==13)
		{
			line++;
			cout<<endl;
			space++;
		}
		if(ch==' ')
		space++;
		a[i]=ch;
		i++;
	}
	lenght=strlen(a);
	cout<<"\nNo of lines     : "<<line;
	cout<<"\nNo of words     : "<<space+1;
	cout<<"\nNo of characters    : "<<lenght-(space+line);
	getch();
	return 1;
}
