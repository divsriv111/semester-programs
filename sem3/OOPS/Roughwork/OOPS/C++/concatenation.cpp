#include<iostream>
#include<conio.h>
#define MAX 100
using namespace std;
int n;
char c[MAX];
void scat(int x,char a[],char b[])
{
	int i=0,j=0,k=0;
	if(x==0)
	{
	while(a[i]!='\0')
	{
		c[n+i]=a[i];
		if(a[i+1]=='\0')
		{
			k=n+i;
			while(b[j]!='\0')
			{
				c[k+j+1]=b[j];
				j++;
			}
			break;
		}
		i++;
	}
	n=k+j+1;
	}
	else
	{
		while(b[k]!='\0')
		{
			c[n+k]=b[k];
			k++;
		}
		n=n+k+1;
	}
}
int main()
{
	char ch;
	char a[20],b[20],d[20];
	cout<<endl;
	cout<<"Enter the string 1";
	cout<<endl;
	cin>>a;
	cout<<"Enter the string 2";
	cout<<endl;
	cin>>b;
	scat(0,a,b);
	puts(c);
	while(1)
	{
	cout<<"Do you want to continue(y/n)?";
	cin>>ch;
	if(ch=='n'||ch=='N')
	break;
	else{
	cout<<endl;
	cout<<"Enter NEW string:";
	cin>>d;
	scat(1,c,d);
	puts(c);
	}
	}
}
