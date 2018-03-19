#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100],*ptr[100],i,j,k,l,n;
 printf("how many elements you want to enter ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  ptr[i]=&a[i];
 }
 int max=0;
 for(i=0;i<n;i++)
 {
  if(*ptr[i]>max)
  {
   max=*ptr[i];
  }
 }
 printf("the greatest element is %d",max);
}
