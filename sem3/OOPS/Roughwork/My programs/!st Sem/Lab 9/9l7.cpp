#include<stdio.h>
void main()
{
int n,p=1,sum=0,avg=0,x;
printf("enter stenght of number");
scanf("%d",&n);
for(p=1;p<=n;p++)
{
scanf("%d",&x);
sum=sum+x;
}
avg=sum/n;
printf("the sum of n numbers is %d \n",sum);
printf("the average of n numbers is %d",avg);
}