#include<stdio.h>
void main()
{
int a[5],i,*p,sum=0;
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
p=&a;
for(i=0;i<5;i++)
{
    sum =sum + *p;
    p++;
}
printf("\nsum is %d ", sum);
}
