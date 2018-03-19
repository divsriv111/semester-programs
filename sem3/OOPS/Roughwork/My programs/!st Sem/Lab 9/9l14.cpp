#include<stdio.h>
#include<math.h>
void main()
{
int x,i;
float sum,sum1,re;
printf("enter number");
scanf("%d",&x);
sum=(1-x)/x;
for(i=2;i<=7;i++)
{
sum1=sum1+ pow((1-x)/x,i);
}
re=sum+sum1;
printf("the result is %f",re);
}