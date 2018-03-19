#include<stdio.h>
#include<conio.h>
int main()
{
	int a[30],n,temp,i;
	printf("Enter array size\n");
	scanf("%d",&n);
	
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
			if(a[i]<a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
	printf("greatest element is:%d",a[0]);
	getch();
	return 0;
}
