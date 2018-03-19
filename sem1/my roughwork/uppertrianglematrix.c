#include<stdio.h>
#include<conio.h>
int k;
void main()
{
	int a[10][10],i,j,n,x;
	printf("enter size of square matrix\n");
	scanf("%d",&n);
	printf("Matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		k++;
		a[i][j]=k;
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
			printf("\n");
	}
	
	printf("New matrix is:\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j+i<=n-1)
			 printf("%d\t",a[i][j]);
			else
			 printf("\t");
		}
		printf("\n");
	}
	getch();
}
