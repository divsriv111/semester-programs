#include<stdio.h>
int sum(int,int);
void main()
{
	int m,n,k;
	printf("Enter two numbers\n");
	scanf("%d%d",&m,&n);
	k=sum(m,n);
	printf("multiplication =%d",k);
	
}
int sum(int a,int b)
{
	int i,sum=0;
	for(i=0;i<b;i++)
	sum=sum+a;
	return sum;
}
