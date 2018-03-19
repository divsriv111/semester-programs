#include<stdio.h>
void fab(int);
void main()
{
	int n;
	printf("Enter the limit of series\n");
	scanf("%d",&n);
	fab(n);
}
void fab(int x)
{
	int a[25],i;
	a[0]=1;
	a[1]=1;
	for(i=2;i<x;i++)
	a[i]=a[i-1]+a[i-2];
	
	for(i=0;i<x;i++)
	printf("%d\t",a[i]);
}
