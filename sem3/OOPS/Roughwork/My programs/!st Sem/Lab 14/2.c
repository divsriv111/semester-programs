#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100],*ptr[100],i,j,k,l;
 int n;
 printf("enter the number of elements ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  ptr[i]=&a[i];
 }int temp;
 for(i=0;i<n;i++)
 {
   for(j=i+1;j<n;j++)
   {
    if(*ptr[i]>*ptr[j])
    {
     temp=*ptr[j];
     *ptr[j]=*ptr[i];
     *ptr[i]=temp;
    }
   }
  }
  for(i=0;i<n;i++)
  {
   printf("%d  ",*ptr[i]);
  }
 }

