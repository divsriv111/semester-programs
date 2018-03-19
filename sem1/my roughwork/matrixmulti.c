//program for matrix multiplications//

#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j;
	int m,n,sum=0,x,y,k;
	
	printf("Enter matrix1 size\n");		//for first matrix//
	scanf("%d%d",&m,&n);
	
	printf("Enter elements of matrix1:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
		
	printf("Enter matrix2 size\n");		//for sencond matrix//
	scanf("%d%d",&x,&y);
	
	printf("Enter elements of matrix2:\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		scanf("%d",&b[i][j]);
	}
	
	if(n==x)
	{
		for(i=0;i<m;i++)
		{
			for(k=0;k<y;k++)
			{	c[i][k]=0;
				for(j=0;j<n;j++)
				{c[i][k]=c[i][k]+a[i][j]*b[j][i];}
		}	}
		
		printf("Multiplied matrix is:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<y;j++)
			printf("%d",c[i][k]);
		}	printf("\n\n");
	}
	else
	printf("Multiplication is not possible\n");
	
	getch();
	return 0;
}
