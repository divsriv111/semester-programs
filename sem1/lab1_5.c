#include<stdio.h>
int power(int,int);
void main()
{
	int m,n,k;
	printf("enter the power and number\n");
	scanf("%d%d",&m,&n);
	k=power(m,n);
	printf("%d to the power %d is=%d",n,m,k);
	return 0;
}
int power(int x,int y)
{
	int i,pro=1;
	for(i=0;i<x;i++)
	pro=pro*y;
	
	return pro;
}
