#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
		printf(" ");
		for(j=1;j<=i*2-1;j++)
		{
			printf("*");
			}printf("\n");
		}
		for(i=5;i>=1;i--)
		{
			for(j=5;j>=i;j--)
			{printf(" ");
			}
			for(j=1;j<=i*2-2;j++)
			printf("*");
		    if(i==1)
		    printf("*");
			printf("\n");
			}	
		
		getch();
}
