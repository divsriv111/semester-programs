#include<conio.h>
#include<stdio.h>
void main()
{
	int n,i,j=0;
printf("Enter size of the array\n");
 scanf("%d",&n);
 int a[n];
 printf("\nEnter its elements please\n");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("\nOriginal array is\n");
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
 for(i=0;i<n;i++)
  {
	if(j<a[i])
	  j=a[i];
  }
  printf("\nGreatest element in the array is %d",j);
  getch();
}
