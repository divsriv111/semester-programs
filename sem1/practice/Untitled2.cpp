#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,c=1;
	for(i=65;i<=71;i++)
	printf("%c",i);
	
	for(i=70;i>=65;i--)
	printf("%c",i);
	printf("\n");
	
	for(i=6;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		printf("%c",64+j);
		
		for(j=1;j<=i;j++)
		printf("%c",64+j);
		printf("\n");
		c=c+2;
	}
	getch();
}
