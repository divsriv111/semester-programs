#include<stdio.h>
int prime(int n)
{
	int i=2,c=0;
	for(;i<n/2;i++)
	{
		if(n%i==0)
		c=1;
	}
	if(c==1)
	printf("not a prime");
	else
	printf("prime");
	
	
}
int main()
{
	int n;
	printf("input a number");
	scanf("%d",&n);
	prime(n);
	return 0;
}
