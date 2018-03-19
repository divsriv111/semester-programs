#include<stdio.h>
#include<stdio.h>
void main()
{
	int a[20],i,n,sum=0;
	
	printf("Enter array size:\n");
	scanf("%d",&n);
	
	printf("Enter elements of array\n");
	 for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	 
	 for(i=0;i<n;i++)
	 sum=sum+a[i];
	 
	 printf("sum of elements in the given array is=%d",sum);
	 
	 getch();
	 return 0;
}
