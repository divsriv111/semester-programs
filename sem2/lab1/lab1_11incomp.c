#include<stdio.h>
#include<malloc.h>
extern int n;
int search(int *,int *);
int main()
{
	int a[50],w,*k,b,i;
	
	int *p,*p2;
	p=a;
	printf("Enter array size\n");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Enter element to be searched\n");
	scanf("%d",&b);
	p2=&b;
	k=&w;
	*k=search(p,p2);
	if(w!=0)
	printf("element %d is found at %d index",k);
	else
	printf("element %d is not found");	
	free(p);
	return 0;
}
int search(int *x,int *y)
{
	int c=0,i=0;
	for(i=0;i<n;i++,*y++,*x++)
	{
		if(*y==*x)
		{c=i;
		return c;}
		else
		return 0; 
		
	}
	
}
