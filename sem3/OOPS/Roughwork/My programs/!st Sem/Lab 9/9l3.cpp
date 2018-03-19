#include<stdio.h>
void main()
{
int x,i,c;
scanf("%d",&x);
for(i=1;i<=x;i++)
{
while(x%i==0)
{
c=c+1;
}
}
if(c==2)
printf("number is prime");
else
printf("numbner is not prime");
}

