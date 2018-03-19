#include<stdio.h>
void main()
{
	int a[100],n,i,j,t=0;
	int ch;
	printf("Enter array size\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("1) for ascending\n2) for descending\n");
	scanf("%d",&ch);
	
	switch (ch)
	{
		case 1:
			for(i=0;i<n+1;i++)
			{
				for(j=i;j<n+1;j++)
				{
				if(a[j]>a[j+1])
				
				{
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}
				else 
				continue;
			}}
			printf("Sorted array is:\n");
			for(i=0;i<n;i++)
			printf("%d",a[i]);
			break;
			
		case 2:
			for(i=0;i<n;i++)
			{
				for(j=i;j<n;j++)
				{
				if(a[0]>a[i])
				{
					t=a[0];
					a[i]=a[i];
					a[i]=t;
				}
				}
			}
			printf("Sorted array is:\n");
			for(i=0;i<n;i++)
			printf("%d",a[i]);
			break;
			
		default:
			printf("Invalid input\n");
			break;
	}
	return 0;
}
