#include<stdio.h>
#include"random.h"
void display(int *a,int n)
{
	int i;

	for(i=0;i<n;i++)	
		printf("%d ",a[i]);
}
void selection(int *b,int n)
{
 	int i,j,temp,c=0;
	 for(i=0;i<n-1;i++)
	 {
	 	for(j=i+1;j<n;j++)
	 	{
	 		c++;
	 		printf("\nshowing pass\n");
	 		display(b,n);
	 		if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			} 					
	 	}	
	 		printf("\nshowing pass\n");
	 	display(b,n);
	 }	
	 printf("\nnumber of comparisons=%d\n",c);
}


void main()
{
	int *a,i,n,k,loc=0;
	scanf("%d",&n);
	a=rdm(n);
	printf("Random array is:\n");
	for(i=0;i<n;i++)
	printf("%d ",*(a+i));
	selection(a,n);
		
	printf("enter number to be inserted\n");
	scanf("%d",&k);
	
	for(i=0;i<n-1;i++)
	{
		if(a[i]<k&&k<a[i+1])
		{
		loc=i+1;
		for(i=n;i>loc;i--)
			a[i]=a[i-1];
			a[loc]=k;
		
		}
	}
	display(a,n+1);

	
}
