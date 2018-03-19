#include<stdio.h>
void main()
{
int n,p=1,sum=0;
printf("enter number");
scanf("%d",&n);
for(p=1;p<n;p++)
{
if(n%p==0)
sum=sum+p;
}
if(sum==n)
printf("it is a perfect number");
else
printf("it is not a perfect number");
}

