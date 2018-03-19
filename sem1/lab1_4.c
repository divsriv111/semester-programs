#include<stdio.h>
int prime(int);
void main()
{
	int n,k;
	printf("enter a number\n");
	scanf("%d",&n);
	k=prime(n);
	if(k==0)
	printf("Prime number");
	else
	printf("Not a Prime number");
}
int prime(x)
{
	int i,c=0;
	for(i=2;i<x;i++)
	{
	if(x%i==0)
		{
		c++;
		break;
		}
	else
	continue;
	}
	return c;
}
