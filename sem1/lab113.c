//programme for sorting using array and finding median

#include<stdio.h>
int main()
{
	int i,j=i+1,temp,array[20],n;
	
	printf("Enter the number of elements in array\n");
	scanf("%d",&n);
	
	printf("\nEnter elements of array\n");
	
	for(i=0;i<=n;i++)
	scanf("%d",&array[i]);
	
	
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<n;++j)
		{
			if(array[i]>array[j])
			
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	printf("\nsorted array is:\n");
	for(i=0;i<=n;i++)
	printf("\t%d",array[i]);
	
	printf("\n");
	
	printf("Median is:");
	
	if(n%2==0)
	printf("%d",(array[n/2]+array[n/2-1]));
	else
	printf("%d",array[n/2]);
	getch();
	return 0;
}
