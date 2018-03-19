#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	printf("enter a string\n");
	gets(a);
	printf("enter a 2nd string\n");
	gets(b);
	if(strcmp(a,b)==0)
	printf("equal\n");
	else
	printf("not equal");
}
