#include<stdio.h>
int facto(int);
void main()
{
	int n,r;
	int i,j,k;
	float m;
	printf("Enter the value of n and r\n");
	scanf("%d%d",&n,&r);
	i=facto(n);
	j=facto(n-r);
	k=facto(r);
	m=i/(j*k);
	printf("nCr factor is=%f",m);
	
}
int facto(int x)
{
	int i,pro=1;
	for(i=1;i<=x;i++)
	pro=pro*i;
	return pro;
}
