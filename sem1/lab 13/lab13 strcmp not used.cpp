#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int i=0;
	printf("enter two string\n");
	gets(a);
	gets(b);
	i=0;
	while(a[i]==b[i]&&a[i]!='\n')
	i++;
	if(a[i]>b[i])
	printf("a[i]>b[i]");
	else if(a[i]<b[i])
	printf("a[i]<b[i]");
	else if(a[i]==b[i])
	printf("a[i]=b[i]");
}
