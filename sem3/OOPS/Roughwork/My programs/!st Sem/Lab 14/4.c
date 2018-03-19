#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100],b[100],*ptr[100],*s[100],i,j,k,l,n;
 int m;
 printf("enter the size of 1st and 2nd array ");
 scanf("%d%d",&n,&m);
 printf("enter the 1st array ");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  ptr[i]=&a[i];
 }
 printf("enter the 2nd array ");
 for(i=0;i<m;i++)
 {
  scanf("%d",&b[i]);
  s[i]=&b[i];
 }
 int c[100];
 for(i=0;i<n;i++)
 {
  c[i]=*ptr[i];
 }
 for(i=n;i<m;i++)
 {
  c[i]=*s[i];
 }
 printf("the merged array is ");
 for(i=0;i<m+n;i++)
 {
  printf("%d ",c[i]);
 }
}
