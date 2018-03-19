#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=5;j>i;j--)
		printf(" ");
		for(j=i;j<=i*2-1;j++)
		printf("%d",j);
		for(j=i*2-2;j>=i;j--)
		printf("%d",j);
		printf("\n");
		
		
		}
		for(i=1;i>=0;i--)
	{
		for(j=5;j>i;j--)
		printf(" ");
		for(j=i;j<=i*2-1;j++)
		printf("%d",j);
		for(j=i*2-2;j>=i;j--)
		printf("%d",j);
		printf("\n");
		
		
		}
getch();	
}
