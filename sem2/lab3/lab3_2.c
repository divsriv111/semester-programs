#include<stdio.h>
#include<malloc.h>
static int n;

int search(int *,int *);
void main()
{
	int num,i,x,k=0;
	int *a;
	printf("enter array size\n");
	scanf("%d",&n);
	
	a=(int *)malloc(n*sizeof(int));
	
	
	printf("Enter array elements\n");
	for(x=0;x<n;x++)
	scanf("%d",(a+x));
	
	printf("enter number to be searched\n");
	scanf("%d",&num);

	k=search(a,&num);
	
	if(k!=0)
	printf("Element %d is found at %d position",num,k+1);
	else
	printf("element not found");
	
}
int search(int *p1,int *p2)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(*(p1+i)==*p2)
		{
		return i;
		break;	
		}
		
	}
	if(i==n)
	return 0;
	
}
