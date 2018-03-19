 #include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,l;
	printf("enter a string ");
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
	if((a[i]>=65)&&(a[i]<=90)&&a[i]!=' ')
	a[i]=a[i]+32;
	}
	for(i=0;i<l;i++)
	printf("%c",a[i]);
}
