#include<stdio.h>
void main()
{
int l,b,p,a;
printf("enter length and breadth");
scanf("%d%d",&l,&b);
a=l*b;
p=2*(l+b);
if(a>p)
printf("yes the area is greater than perimeter");
else
printf("the perimeter is greater than area");
}

