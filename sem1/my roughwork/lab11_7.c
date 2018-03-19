#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,n;
	printf("Enter array size:\n");
	scanf("%d",&n);
	
	printf("Enter array elements:\n");
	for(i=0;i<=n;i++)
	{
	scanf("%d",&a[i+1]);
	}
	for(i=0;i<n;i++)
	a[i]=0;
	
	printf("New array is:\n");
	for(i=0;i<=n;i++)
	printf("%d ",a[i]);
	
	getch();
}
