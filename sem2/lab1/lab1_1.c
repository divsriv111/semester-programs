#include<stdio.h>
int large(int);
int main()
{
	int a[100],n,k,i;
	printf("Enter array size\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	for(i=0;i<n;i++)
	k=large(a[i]);
	
	printf("Largest element in array is=%d",k);
	return 0;		
}
int large(int m)
{
	static int x=-99999;
	if(m>x)
	{
	x=m;
	return m;}
	else
	return x;
}


