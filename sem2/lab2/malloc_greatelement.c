#include<stdio.h>
#include<malloc.h>
int great(int);
int main()
{
	int a[50],n,k,i;
	int *p;
	p=a;
	printf("Enter array size\n");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	k=great(a[i]);
	
	printf("Greatest element is=%d",k);	
	free(p);
	return 1;
}
int great(int x)
{
	static int m=0;
	if(x>m)
	{
	m=x;
	return x;
	}
	else
	return m;
}
