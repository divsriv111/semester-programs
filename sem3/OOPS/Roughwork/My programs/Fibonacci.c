#include<stdio.h>
void main()
{
int x=0,y=1,s=0,n,i=0;
scanf("%d",&n);
while(i<n)
{
s=x+y;
x=y;
y=s;
printf("%d ",s);
i++;
}
}
