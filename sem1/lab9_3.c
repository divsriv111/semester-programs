#include<stdio.h>
int main()
{ int c,n;
	printf("input a number");
	scanf("%d",&n);
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{c=1;
		break;
		}
	}
	if(c==1)
	printf("not aprime");
	else
	printf("prime");
	return 0;
}
