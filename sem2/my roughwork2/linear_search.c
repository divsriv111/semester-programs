#include<stdio.h>
#include"random.h"
int search(int *,int,int);
void main()
{
	int *a,n,i,key;
	printf("array size\n");
	scanf("%d",&n);
	a=random(n);
	printf("Random array is:\n");
	for(i=0;i<n;i++)
	printf("%d ",*(a+i));
	
	printf("Enter key to be searched\n");
	scanf("%d",&key);
	if(search(a,n,key))
	printf("Key found");
	else
	printf("Not found");
	
}
int search(a,n,key)
{
	int i;
	for(i=0;i<n;i++)
	{
	if(*(a+i)==key)
	return 1;
	else return 0;
	}
}
