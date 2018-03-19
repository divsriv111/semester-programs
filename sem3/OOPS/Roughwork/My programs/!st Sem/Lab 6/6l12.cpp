#include<stdio.h>
#include<math.h>
void main()
{
int p,t;
float c,r;
printf("enter values of p,t,r");
scanf("%d%f%d",&p,&r,&t);
c=p*((pow(1+(r/100),(t*12))));
printf("the compound interest is%f",c);
}