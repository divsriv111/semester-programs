#include<stdio.h>
int main()
{
int x,y,p,z=1;
printf("enter base and power");
scanf("%d%d",&x,&y);
for(p=1;p<=y;p++)
{
z=z*x;
}
printf("the result is %d",z);
return 0;
}
