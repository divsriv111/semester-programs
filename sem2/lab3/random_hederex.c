#include<stdio.h>
#include"random.h"
void main()
{
	int *a,n,i;
	scanf("%d",&n);
	a=rdm(n);
	printf("random array\n");
	for(i=0;i<n;i++)
	printf("%d\n",*(a+i));
}
