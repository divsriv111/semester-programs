#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100][100],*ptr[100][100],i,j;
 int n,m;
 printf("enter the number of rows and coloumns of the matrix ");
 scanf("%d%d",&n,&m);
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   scanf("%d",&a[i][j]);
   ptr[i][j]=&a[i][j];
  }
 }
 printf("the matrix is \n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   printf("%d\t",*ptr[i][j]);
  }
  printf("\n");
 }
}
