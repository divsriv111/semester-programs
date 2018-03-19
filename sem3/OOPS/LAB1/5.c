#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,j=0;
	char c[25];
	printf("Enter String\n");
	gets(c);
	while(c[i]!='\0')
	{
		j++;
		i++;
	}
	printf("\nString lenght = %d",j);
	getch();	
}
