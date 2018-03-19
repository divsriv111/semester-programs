#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[5],i,sum=0;
	
	for(i=0;i<=4;i++)
	{
		printf("Enter element of arr[%d]\n",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=4;i++)
	{
		printf("\nYou have stored element %d in arr[%d]\n",arr[i],i);
		
	}
	for(i=0;i<=4;i++)
	sum=sum+arr[i];
	
	printf("\nAnd their sum is=%d",sum);
	getch();
	return 1;
}
