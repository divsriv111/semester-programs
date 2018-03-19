#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void max_heapify(int *a,int q,int n)
{int l,r,temp,largest;

	l=(2*q)+1;

	r=(2*q)+2;

	if(l<=n && a[l]>a[q])
	{

		largest=l;}else
		{
			largest=q;
			}
	if(r<=n && a[r]>a[largest])
	{
		largest=r;
		}
	if(largest!=q)
	{
		temp=a[q];
		a[q]=a[largest];
		a[largest]=temp;
		max_heapify(a,largest,n);}
}
void buildmax_heapify(int *a,int n)
{
	for(int q=n/2;q>=0;q--)
	{
		max_heapify(a,q,n);
	}
}
int heap_extract_max(int *a,int n)
{int max;
buildmax_heapify(a,n);
	if(n<1)
	{printf("heap underflow\n");
	}
	max=a[0];
	a[0]=a[n];
	max_heapify(a,0,n-1);
	return max;
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

q=heap_extract_max(a,n);
	for(int j=0;j<=n;j++)
	{
		printf("%d\t",*(a+j));
		}printf("\n");
	printf("largest number =%d\n",q);

   getch();
	return 0;
}
