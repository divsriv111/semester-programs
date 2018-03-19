//programme for sorting using array

#include<stdio.h>
int main()
{
	int i,j=i+1,temp,array[5];
	
	printf("\nEnter 5 numbers\n");
	
	for(i=0;i<=5;i++)
	scanf("%d",&array[i]);
	
	
	for(i=0;i<=5;i++)
	{
		for(j=i+1;j<5;++j)
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
	
	for(i=0;i<=5;i++)
	printf("\t%d",array[i]);
	getch();
	return 1;
}
