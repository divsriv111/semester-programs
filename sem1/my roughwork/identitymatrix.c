#include<stdio.h>
int main()
{
	int a[10][10],i,j,m,x=0,y=0;
	printf("Enter size of matrix\n");
	scanf("%d",&m);
	printf("Enter elements of array\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",a[i][j]);
			if(i!=j&&a[i][j]==0)
			x++;
			if(i==j&&a[i][j]==1)
			y++;
		}
		printf("\n");
	}
	if(x==m*m-m && y==m)
	printf("YES");
	
	else
	printf("NO");
	return 0;
}
