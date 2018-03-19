#include<stdio.h>
void great();
void main()
{
	printf("Enter the array size\n");
	great();
	
}
void great()
{
	int n,a[50],i,ln=0,k;
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	ln=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>ln)
		{
		ln=a[i];
		k=i;
		}
		continue;
	}
	printf("Great element is %d found at %d place",ln,k+1);
}
