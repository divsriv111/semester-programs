#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the three numbers a b c");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("a is greatest of all");
else if(b>c && b>a)
printf("b is greatest  of all");
else if(c>b && c>a)
printf("c is greatest of all");
}