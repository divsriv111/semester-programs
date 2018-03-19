#include<stdio.h>
#include<conio.h>
#include<string.h>
int x,i,j,temp,l,y=0;
char a[30],b[30];
int main()
{
	gets(a);
	l=strlen(a);
	for(i=l;i>=0;i--)
	{
		x++;
		if((a[i-1]==' ')||(i==0))
		{ 
			temp=i;
			if(a[temp]!='\0')
			{
			for(;x>=0;x--)
			{
				if(a[temp]!='\0')
				{
				b[j]=a[temp];
				temp++;
				j++;
				}
			}
			b[j++]=' ';
			x=0;
			}
		}
	}
	for(i=0;i<=l;i++)
	printf("%c",b[i]);
	getch();
	return 0;
}
