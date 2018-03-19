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
void heap_decrease_key(int *a,int i,int key,int n)
{int temp;
	buildmin_heapify(a,n);
	if(key>a[i])
	{
		printf("new key is greater than current key\n");
		}
	a[i]=key;
	while((i>1)&&a[i/2+1]>a[i])
	{temp=a[(i/2)+1];
	a[(i/2)+1]=a[i];
	a[i]=temp;
	i=(i/2)+1;buildmin_heapify(a,n);
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
	heap_decrease_key(a,x,y,n);
	for(int j=0;j<=n;j++)
	{
		printf("%d\t",*(a+j));
		}

   getch();

	return 0;
}
