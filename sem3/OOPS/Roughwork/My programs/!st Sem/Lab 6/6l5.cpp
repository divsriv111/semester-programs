#include<stdio.h>
void main()
{
int a,b,r,q;
printf("enter two numbers number");
scanf("%d%d",&a,&b);
if(a>b)
{
r=a%b;
q=a/b;
}
else
{
r=b%a;
q=b/a;
}
printf("the remainder and quotient are  %d  %d",r,q);
}