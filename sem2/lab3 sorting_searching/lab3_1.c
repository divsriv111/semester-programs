#include<stdio.h>
int sym(int *,int *);
static int n;
void main()
{
	int a[10][10],i,j,k,b[10][10];
	
	printf("Enter matrix size\n");
	scanf("%d",&n);
	printf("Enter matrix elements\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		b[i][j]=a[j][i];
	}
	
	k=sym(a,b);
	if(k==n*n)
	printf("Symatrix matrix\n");
	else
	printf("Not symatrix");
	
}
int sym(int *p,int *p1)
{
	int i,j,x=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if((*p+j)==(*p1+j))
			x++;
		}
		*p++;
		*p1++;
	}
	return x;
}
