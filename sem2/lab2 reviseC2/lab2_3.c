#include<stdio.h>
int gcd(int,int);
void main()
{
	int m,n,k;
	printf("Enter a and b\n");
	scanf("%d%d",&m,&n);
	k=gcd(m,n);
	printf("GCD is =%d\n");	
}
int gcd(int a,int b)
{
	int r;
	if(a==1||b==1)
	return 1;
	else
	{
	do
	{
		r=a%b;
		a=r;
		b=a;
	}while(r>a);
	return a;
	}
	
}
