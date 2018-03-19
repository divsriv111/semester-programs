#include<stdio.h>
#include<math.h>
int deci(int);
void main()
{
	int n,k;
	printf("Enter binary number\n");
	scanf("%d",&n);
	k=deci(n);
	printf("Decimal equivalent is=%d",k);
	
}
int deci(int n)
{
	int i=0,r,sum=0;
	while(n>0)
	{
		r=n%10;
		sum+=r*pow(2,i);
		n=n/10;
		i++;
	}
	return sum;
}
