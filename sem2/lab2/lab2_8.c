#include<stdio.h>
void upper(int);
void main()
{
	int n;
	printf("enter the size of matrix\n");
	scanf("%d",&n);
	upper(n);
}
void upper(int m)
{
	int k=1,a[10][10],i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
		a[i][j]=k;
		k++;
		}
	
	}
	printf("original matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
		printf("%d\t",a[i][j]);
		
		}
	printf("\n");
	}
	printf("new matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i>=j)
			printf("%d\t",a[i][j]);
			else
			printf("0\t");
		}
		printf("\n");
	}
	
}
