#include<stdio.h>
#include"random.h"
int n;
void display(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d ",*(a+i));
}
void quick(int *a,int l,int r)
{
	int nl=l,nr=r,temp,amid;
	amid=a[(l+r)/2];
	do
	{
		while(a[nl]<amid&&nl<r)
		nl++;
		while(amid<a[nr]&&l<nr)
		nr--;
		if(nl<=nr)
		{
			temp=a[nl];
			a[nl]=a[nr];
			a[nr]=temp;
			nr--;
			nl++;
			
		}
	}while(nl<=nr);
	if(nl<r)
	quick(a,nl,r);
	if(nr>l)
	quick(a,l,nr);
	
}
void main()
{
	int *a;
	scanf("%d",&n);
	a=rdm(n);
	printf("Random array is:\n");
	display(a,n);
	quick(a,0,n-1);
	printf("\nSorted array is:\n");
	display(a,n);
}

