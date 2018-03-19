#include<stdio.h>
#include<conio.h>
int main() 
{
	int i,j,k;
	
	for(i=1;i<=10;i++)
	{
		for(k=9;k>=i;k--)
		printf(" ");
		
		for(j=1;j<=+2*i-1;j++)
		printf("*");
		
			printf("\n");
		
	}
	
	for(i=10;i>=1;i--)
	{
		for(k=0;k<=i;k++)
		printf(" ");
		
		for(j=9;j>=2*i-1;j--)
		printf("*");
		
		printf("\n");
	}
	getch();
}
