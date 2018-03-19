#include<stdio.h>
int main()
{
	int i,c=0,j,ar[10][10],a[10][10],m,n;
	printf("input row and columns");
	scanf("%d%d",&m,&n);
	printf("input array elements");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);

		for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
	ar[i][j]=a[j][i];

	}

	for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
	if(a[i][j]!=ar[i][j])
	{c=1;break;}
}
if(c==0)
printf("symmetric one");
else
printf("not a symmetric");
		printf("\n");

	
	for(i=0;i<n;i++)
	{for(j=0;j<m;j++)
	printf("%d ",ar[i][j]);
	printf("\n");
	}
	
		getch();
	
	
}
