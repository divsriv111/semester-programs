#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	char *s;
	printf("enter a string\n");
	scanf("%s",a);
	printf("enter 2nd string\n");
	scanf("%s",b);
    strcat(a,b);
	printf("%s",a);
}
