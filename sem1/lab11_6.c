#include<stdio.h>
int main()
{
	int ar[100],a[100],i,sum=0,n;
	printf("input numbers of elements in array");
	scanf("%d",&n);	
	printf("input a array of n terms");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		ar[i]=a[i];
		}
		ar[n]=sum;
		for(i=0;i<=n;i++)
		{
			printf("%d\n",ar[i]);
			
			}
	getch();
	
	
}
