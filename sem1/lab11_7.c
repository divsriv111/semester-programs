#include<stdio.h>
#include<conio.h>
int main()
{
		int i,j,t[100],ar[100],n,c=0;
	
	printf("input size of array");
	scanf("%d",&n);
	printf("input array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
	t[c++]=ar[i];
	t[c++]=0;
		
		}
		for(i=0;i<=n*2-1;i++)
		printf("%d\n",t[i]);
		
		
		getch();
		return 0;
	}
