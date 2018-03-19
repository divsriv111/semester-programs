#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void min_heapify(int *a,int q,int n)
{int l,r,temp,smallest;

	l=(2*q)+1;

	r=(2*q)+2;

	if(l<=n && a[l]<a[q])
	{

		smallest=l;}else
		{
			smallest=q;
			}
	if(r<=n && a[r]<a[smallest])
	{
		smallest=r;
		}
	if(smallest!=q)
	{
		temp=a[q];
		a[q]=a[smallest];
		a[smallest]=temp;
		min_heapify(a,smallest,n);}
}
void buildmin_heapify(int *a,int n)
{
	for(int q=n/2;q>=0;q--)
	{
		min_heapify(a,q,n);
	}
}
int heap_extract_min(int *a,int n)
{int min;
buildmin_heapify(a,n);
	if(n<1)
	{printf("heap underflow\n");
	}
	min=a[0];
	a[0]=a[n];
	min_heapify(a,0,n-1);
	return min;
}
int main()
{
	int i=0,n,q;
	printf("enter the length of array");
	scanf("%d",&n);
	int *a=(int*) malloc(n*sizeof(int));
    for(int j=0;j<=n;j++)
        *(a+j)=rand();
	for(int j=0;j<=n;j++)
       printf("%d\t",*(a+j));
	printf("\n");

q=heap_extract_min(a,n);
	for(int j=0;j<=n;j++)
	{
		printf("%d\t",*(a+j));
		}printf("\n");
	printf("smallest number =%d\n",q);

   getch();
	return 0;
}
