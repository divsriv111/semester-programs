#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char *rev;
	printf("enter a string\n");
	scanf("%s",str);
	rev=strrev(str);
	printf("rev=%s",rev);
}
