#include<stdio.h>
void main()
{
long bs;
float gs,da,hra,b;
printf("enter basic salary");
scanf("%ld",&bs);
da=0.40*bs;
hra=0.80*da;
b=0.25*hra;
gs=bs+da+hra+b;
printf("the gross salary is%f",gs);
}