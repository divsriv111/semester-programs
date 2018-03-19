#include<stdio.h>
#include<conio.h>
void main()
{
	
	int a[10],i,n,b[10];
	printf("Enter array size:\n");
	scanf("%d",&n);
	
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	b[0]=a[0];
	printf("New array is:%d ",b[0]);

	
	for(i=1;i<n;i++)
	{	
		b[i]=a[i]+a[i-1];
		printf("%d ",b[i]);
	}
	getch();
	
}
