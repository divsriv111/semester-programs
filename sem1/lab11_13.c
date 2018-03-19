#include<stdio.h>
int main()
{
int c=0,sum,i,n,b[100],a[100];
	printf("enter number of elements");
	scanf("%d",&n);
	printf("enter the array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	while(c<n)
	{sum=0;
	for(i=0;i<c;i++)
	sum=sum+a[i];
	b[c]=sum;
	c=c+1;
	
	}
	for(i=0;i<c;i++)
	printf("%d",b[i]);



return 0;

}
