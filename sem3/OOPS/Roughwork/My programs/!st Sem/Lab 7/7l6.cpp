#include<stdio.h>
void main()
{
int x1,x2,x3,y1,y2,y3,m1,m2,m3;
printf("enter the points");
scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);
m1=(y2-y1)/(x2-x1);
m2=(y3-y1)/(x3-x1);
m3=(y3-y2)/(x3-x2);
if(m1==m2 && m2==m3)
{
printf(" as the slopes are same the pionts lie in straight line");
}
else
{
printf("the points do not lis in straight line");
}
}
