#include<stdio.h>
#include<conio.h>
struct student
{
 int date,month,year;
}a,b;

void main()
{
 int i,j,k,l;
 printf("enter the first date ");
 scanf("%d%d%d",&a.date,&a.month,&a.year);
 printf("\nenter another date ");
 scanf("%d%d%d",&b.date,&b.month,&b.year);
 if(a.date==b.date&&a.month==b.month&&a.year==b.year)
 {
  printf("dates are equal");
 }
 else
 printf("dates are not equal ");
}
