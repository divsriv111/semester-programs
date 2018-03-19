#include<stdio.h>
#include"random.h"
void dsp(int *a,int n)
{
	int i;

	for(i=0;i<n;i++)	
	printf("%d ",a[i]);
}
void bubble(int *b,int n)
{
 	int i,j,c=0;
	 for(i=1;i<n;i++)
	 {
	 	for(j=0+1;j<n-i-1;j++)
	 	{
	 		c++;
	 		printf("\nshowing pass\n");
	 		dsp(b,n);
	 		if(b[i]>b[j+1])
			{
				temp=b[i];
				b[i]=b[j+1];
				b[j+1]=temp;
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
	bubble(a,n);
}
