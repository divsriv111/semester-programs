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
void heap_increase_key(int *a,int i,int key,int n)
{int temp;
	buildmax_heapify(a,n);
	if(key<a[i])
	{
		printf("new key is smaller than current key\n");
		}
	a[i]=key;
	while((i>1)&&a[i/2+1]<a[i])
	{temp=a[(i/2)+1];
	a[(i/2)+1]=a[i];
	a[i]=temp;
	i=(i/2)+1;buildmax_heapify(a,n);
}
}
int main()
{
	int i=0,n,q,x,y,a[100];
	printf("enter the length of array");
	scanf("%d",&n);

    for(int j=0;j<=n;j++)
        *(a+j)=rand();
	for(int j=0;j<=n;j++)
       printf("%d\t",*(a+j));
	printf("\n");
    printf("enter the key and place of key\n");
    scanf("%d%d",&x,&y);
	heap_increase_key(a,x,y,n);
	for(int j=0;j<=n;j++)
	{
		printf("%d\t",*(a+j));
		}

   getch();

	return 0;
}
