#include<stdio.h>
void main()
{
int n,sum=0,dig;
printf("enter a three digit number");
scanf("%d",&n);
dig=n%10;
sum=sum+dig;
n=n/10;
dig=n%10;
sum=sum+dig;
n=n/10;
sum=sum+n;
printf("%d",sum);
}
