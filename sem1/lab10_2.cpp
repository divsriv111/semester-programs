#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=4;j>i;j--)
		printf(" ");
		for(j=i;j<=i*2-1;j++)
		printf("%d",j);
		for(j=i*2-2;j>=i;j--)
		printf("%d",j);
		printf("\n");
		
		
		}
		for(i=3;i>=1;i--)
	{
		for(j=4;j>=i;j--)
		printf(" ");
		for(j=i;j<=i*2-1;j++)
		printf("%d",j);
		for(j=i*2-2;j>=i;j--)
		printf("%d",j);
		printf("\n");
		
		
		}
	
}
