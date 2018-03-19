#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j,k,m,l,b,p=0;
	printf("Enter any odd no. to get a perfect \"X\" pattern\n");
	scanf("%d",&n);
	for(i=1;i<=n/2+1;i++)
	{
		for(j=1;j<i;j++)
		printf(" ");
		for(k=1;k<=n-p;k++)
		{ 
		if(k==1||k==n-p)
		printf("*");
		else
		printf(" ");
		}
		printf("\n");p=p+2;
	}
	p=3;
	for(m=1;m<=n/2;m++)
	{
	    for(l=n/2-1;l>=m;l--)
		printf(" ");	
		for(b=1;b<=p;b++)
		{
		if(b==1||b==p)
		printf("*");
		else
		printf(" ");
		}
		printf("\n");p=p+2;
	}
	
	getch();
}
