#include<stdio.h>
#include"random.h"
void main()
{
	int n,i;
	int *j;
	scanf("%d",&n);
	j=random(n);
	for(i=0;i<n;i++)
	printf("%d\t",*(j+i));
}
