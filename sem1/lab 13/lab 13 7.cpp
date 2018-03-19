#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i=0;
	printf("enter a strig\n");
	scanf("%s",str);
	i=strlen(str);
	printf("len=%d",i);
}
