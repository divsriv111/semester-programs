#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#include<dos.h>
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

	buildmax_heapify(a,n);
	for(int j=0;j<=n;j++)
	{
		printf("%d\t",*(a+j));
		}
			
	free(a);
	getchar();
	return 0;	
}
