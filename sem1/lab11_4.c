#include<stdio.h>
int main()
{
		int max,i,ar[100],n;
	
	printf("input size of array");
	scanf("%d",&n);
	printf("input array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	max=ar[0];
	for(i=1;i<n;i++)
	{
		if(max<ar[i])
		max=ar[i];
			
	}
	printf("greatest  value is %d" ,max);
}
