#include<stdio.h>
int main()
{
int n,dig,arm=0,p;
printf("enter number");
scanf("%d",&n);
p=n;
while(n>0)
{
dig=n%10;
arm=arm+(dig*dig*dig);
n=n/10;
}
if(arm==p)
printf("the number is armstrong");
else
printf("the number is not armstrong");
return 0;
}
