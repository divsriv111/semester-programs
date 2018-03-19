#include<stdio.h>
#include<math.h>
int sum(int);
void main()
{
	int n,k;
	printf("Enter the limit\n");
	scanf("%d",&n);
	k=sum(n);
	printf("sum of series upto %d=%d",n,k);
}
int sum(int x)
{
	int sum=0,i;
	for(i=1;i<=x;i++)
	sum=sum+pow(i,2);
	return sum;
}
