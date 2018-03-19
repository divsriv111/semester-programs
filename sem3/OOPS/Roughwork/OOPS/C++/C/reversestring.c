#include<stdio.h>
#include<conio.h>
int strlenght(char a[])
{
	int i=0,j=0;
	while(a[i]!='\0')
	{
		j++;
		i++;
	}
	return j;
}
void main()
{
	char a[150];
	int i;
	printf("enter the string\n");
	gets(a);
	i=strlenght(a);
	printf("\n");
	while(i>=0)
	{
		printf("%c",a[i]);
		i--;
	}
	getch();
}
