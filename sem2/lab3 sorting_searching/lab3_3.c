#include<stdio.h>
void main()
{
	int a[100],n,beg,end,mid,num;
	int i,j,loc,temp;
	
	printf("Enter array size\n");
	scanf("%d",&n);
	
	beg=0,end=n-1,mid=(beg+end)/2;
	
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	printf("enter element to be searched\n");
	scanf("%d",&num);
	
	
	while(beg<=end&&a[mid]!=num)
	{
		if(num<a[mid])
		end=mid-1;
		else
		beg=mid+1;
		
		mid=(beg+end)/2;
	}
	if(a[mid]=num)
	loc=mid;
	else
	loc=0;
	if(loc!=0)
	printf("Element %d is found at %d location\n",num,loc+1);
	else
	printf("Element %d is not found :(");
}
