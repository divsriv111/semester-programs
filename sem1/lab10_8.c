#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=7;i++)
	{
		for(j=7;j>i;j--)
		printf(" ");
		for(j=1;j<=i;j++)
		{
			printf("*");
			}printf("\n");
		}getch();
}
