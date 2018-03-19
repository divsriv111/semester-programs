#include<stdio.h>
int main()
{
	int m,n,a[100][100],i,j;
	printf("input row and columns");
	scanf("%d%d",&m,&n);
	printf("input array elements");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	
	
		for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
	printf("%d",&a[i][j]);
	printf("\n");
}
	
	getch();
	
	
	
	
	
}
