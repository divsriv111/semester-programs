#include<stdio.h>
#include"random.h"
void display(int *a,int n)
{
	int i;

	for(i=0;i<n;i++)	
		printf("%d ",a[i]);
}
void insertion(int *a,int n)
{
 	int i,j,item,c=0;
	 for(j=1;j<n;j++)
	 {	item=a[j];
		 i=j-1;
	 	while(i>=0&&item<a[i])
	 	{
		a[i+1]=a[j];
	 	i=i-1;
	 	c++;
		}
		a[i+1]=item;
	 	
	 }	
	 
}
void main()
{
	int i,j,*a,n;
	printf("Enter array size\n");
	scanf("%d",&n);
	a=rdm(n);
	printf("Random unsorted array is\n");
	display(a,n);
	insertion(a,n);
	printf("Sorted array is\n");
	display(a,n);
}
