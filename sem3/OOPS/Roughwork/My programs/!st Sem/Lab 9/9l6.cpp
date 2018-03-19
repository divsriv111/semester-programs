#include<stdio.h>
void main()
{
int n,p,fact=1;
printf("enter number");
scanf("%d",&n);
for(p=1;p<=n;p++)
{
fact=fact*p;
}
printf("the factorial is %d",fact);
}