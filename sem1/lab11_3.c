#include<stdio.h>
int main()
{
		int median,i,j,temp,ar[100] 	,n;
	
	printf("input size of array");
	scanf("%d",&n);
	printf("input array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(ar[i]<ar[j])
			{
				temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
				
			}
		}
	}

	if(n%2==0)
	{
		median=(ar[(n-1)/2]+ar[n/2])/2;
		
		
	}
	else
	median=ar[n/2];
	
	printf("median is = %d",median);
}
