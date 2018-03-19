#include<stdio.h>
void binary(int);
void main()
{
	int n;
	printf("Enter a decimal number\n");
	scanf("%d",&n);
	binary(n);
	
}
void binary(int b)
{
	int x[50],i=0,c=0;
	do
	{
		x[i]=b%2;
		b=b/2;
		c++;
		i++;
	}while(b!=0);
	printf("binary equivalent is:\n");
	for(i=c-1;i>=0;i--)
	printf("%d ",x[i]);
	
}
