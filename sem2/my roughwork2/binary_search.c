#include<stdio.h>
void main()
{
	int a[50],i,n,mid,ub,lb,item,temp,j,k;
	printf("Enter array size\n");
	scanf("%d",&n);
	
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(a[j]>a[i])
		{
			temp=a[j];
			a[i]=a[j];
			a[j]=temp;
			
			for(k=0;k<n;k++)
			printf("%d\t",a[k]);
		}
		}
		printf("\n");	
	}
	lb=0;
	ub=n-1;
	printf("Enter element to be searched\n");
	scanf("%d",&item);
	mid=(lb+ub)/2;
	while(lb<=ub&&a[mid]!=item)
	{
		
		if(item<mid)
		ub=mid-1;
		else
		lb=mid+1;
		mid=(lb+ub)/2;
	}
	if(item==a[mid])
	printf("Element found at %d position\n",mid+1);
	else
	printf("element not found");
}

	
