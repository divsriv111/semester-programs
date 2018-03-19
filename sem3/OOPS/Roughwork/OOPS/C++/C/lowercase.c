#include<stdio.h>
#include<conio.h>
#define MAX 100
char lower(char a[])
{
	int i=0;
	while(a[i]!='\0')
	{
		if(a[i]>=65&&a[i]<=90)
		a[i]=a[i]+32;
		i++;
	}
}
int main()
{
	char a[MAX];
	printf("Enter the string\n");
	gets(a);
	lower(a);
	printf("\n");
	puts(a);
	getch();
	return 0;
}
