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
void heap_increase_key(int *a,int key,int n)
{int temp;
	buildmax_heapify(a,n);
	if(key<a[n])
	{
		printf("new key is smaller than current key\n");
		}
	a[n]=key;
	while((n>1)&&a[(n)/2+1]<a[n])
	{temp=a[((n)/2)+1];
	a[((n)/2)+1]=a[n];
	a[n]=temp;
	n=(n)/2+1;
	buildmax_heapify(a,n);
}
}
void max_heap_insert(int *a,int key,int n)
{
	n=n+1;
	a[n+1]=0;
	heap_increase_key(a,key,n);
}
int main()
{
	int i=0,n,q,x,y;
	printf("enter the length of array");
	scanf("%d",&n);
	int *a=(int *)malloc(sizeof(int));
    for(int j=0;j<=n;j++)
        *(a+j)=rand();
	for(int j=0;j<=n;j++)
       printf("%d\t",*(a+j));
	printf("\n");
    printf("enter the key\n");
    scanf("%d",&y);
    max_heap_insert(a,y,n);
	for(int j=0;j<=n+1;j++)
	{
		printf("%d\t",*(a+j));
		}

getch();

	return 0;
}
