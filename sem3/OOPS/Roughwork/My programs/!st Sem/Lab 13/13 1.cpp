#include<stdio.h>
#include<string.h>
int main()
{                                                                                                              
	char a[20];
	int i,l,v=0,c=0;
	printf("enter a string ");
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
	if(('a'==a[i])||('e'==a[i])||('i'==a[i])||('o'==a[i])||('u'==a[i])||('A'==a[i])||('E'==a[i])||('I'==a[i])||('O'==a[i])||('U'==a[i]))
	v++;
	else
	c++;
	}
	printf("no is a vowel:%d",v);
	printf("no of consonent:%d",c);
}
