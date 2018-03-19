#include<stdio.h>
#include"random.h"
void dsp(int *a,int n)
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
	 		dsp(b,n);
	 		if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			} 					
	 	}	
	 		printf("\nshowing pass\n");
	 	dsp(b,n);
	 }	
	 printf("\nnumber of comparisons=%d\n",c);
}
void main()
{
	int i,j,*a,n;
	printf("Enter array size\n");
	scanf("%d",&n);
	a=rdm(n);
	printf("Random unsorted array is\n");
	dsp(a,n);
	selection(a,n);
}
