#include<stdio.h>
void fac(int);
void main()
{
	int n;
	scanf("%d",&n);
	fac(n);
	getch();
}
void fac(int c)
{
	int i,b;
	printf("factors are:\n");
	for(i=1;i<=c;i++)
	{
		if(c%i==0)
		printf("%d ",i);
		continue;
	
	}
}
