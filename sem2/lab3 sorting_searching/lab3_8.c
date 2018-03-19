#include<stdio.h>
#include"random.h"
void dsp(int *a,int n)
{
	int i;

	for(i=0;i<n;i++)	
	printf("%d ",a[i]);
}
void quick(int *a,int l, int r)
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
			temp=a[nr];
			a[nr]=a[nl];
			a[nl]=temp;
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
	int *a,n;
	scanf("%d",&n);
	a=rdm(n);
	printf("Random array is:\n");
	dsp(a,n);
	quick(a,0,n-1);
	printf("\nSorted array is:\n");
	dsp(a,n);

}
