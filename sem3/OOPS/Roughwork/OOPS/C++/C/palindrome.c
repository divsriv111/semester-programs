#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 10
void main()
{
	int i,l,flag=0;
	char a[MAX];
	printf("Enter string\n");
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]!=a[l-i])
		flag=1;
	}
	if(flag==0)
	printf("\nPALINDROME\n");
	else
	printf("\nNOT PALINDROME\n");
}
