#include<stdio.h>
void main()
{
int n,dig,sum=0,p;
printf("enter number");
scanf("%d",&n);
p=n;
while(n>0)
{
dig=n%10;
sum=sum+dig;
n=n/10;
}
printf("the sum of digits is %d",sum);
}