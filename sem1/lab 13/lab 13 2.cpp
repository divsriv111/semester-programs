#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int l,i;
	char n;
	printf("enter a string\n");
	scanf("%s",a);
	printf("enter a char\n");
	scanf("%c",&n);
	l=strlen(a);
	for(i=0;i<l;++i)
	{
		if(a[i]=='n')
	    {
		printf("found");}
		else
		{
		printf("not found");}
	}
}
