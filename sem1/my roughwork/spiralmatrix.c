#include<stdio.h>
void main()
{
	int i=0,j=0,c=1,m=0,d,n,k,b,x;
	int a[50][50];
	scanf("%d",&n);
	x=n%2==0?n*n:n*n-1;
	b=n-1;
	while(c<=x)
	{
		i=m;
		j=m;
		for(k=1;k<=4;k++)
		{
			for(d=1;d<=b;d++)
			{a[i][j]=c;
			c++;
			if(k==1)
			j++;
			
			if(k==2)
			i++;
			
			if(k==3)
			j--;
			
			if(k==4)
			i--;}
		}
		m++;
		b=b-2;
	}
	if(n%2==1)
	a[n/2][n/2]=n*n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
}
