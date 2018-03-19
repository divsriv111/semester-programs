#include<stdio.h>
void main()
{
float a,b,c,sum;
printf("enter three angles of triangle");
scanf("%f%f%f",&a,&b,&c);
sum=a+b+c;
if(sum>180)
printf("the triangle is not valid");
else
printf("the triangle is valid");
}
