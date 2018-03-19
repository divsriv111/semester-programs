#include<stdio.h>
void main()
{
int d;
printf("enter number of days");
scanf("%d",&d);
if(d>=1 && d<=5)
printf("the fine is 50 paise");
else if(d>=6 && d<=10)
printf("the fine is 1 rupee");
else if(d>10 && d<30)
printf("the fine is 5 rupees");
else
printf("memebership cancelled");
}
