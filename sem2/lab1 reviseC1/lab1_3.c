#include<stdio.h>
void search(int);
int main()
{
	int n;
	printf("Enter array size\n");
	scanf("%d",&n);
	search(n);
	return 0;
}
void search(int x)
{
	int a[100],i,k,c;
	printf("Enter elements\n");
	for(i=0;i<x;i++)
	scanf("%d",&a[i]);

	printf("Enter the number to be searched\n");
	scanf("%d",&k);
	
	for(i=0;i<x;i++)
	{
	if(a[i]==k)
	{
	printf("%d is found at %d place",k,i+1);
	break;
	}
	else
	continue;
	}
}
