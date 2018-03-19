#include<stdio.h>
int prime(int);
void main()
{
	int a,b;
	scanf("%d",&a);
	b=prime(a);
	if(b==0)
	printf("prime no.");
	else
	printf("not a prime number");
	getch();
	
}
int prime(int x)
{
	int i,c=0;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		c++;
	}
	if(c==0)
	return 0;
	else
	return 1;
}
