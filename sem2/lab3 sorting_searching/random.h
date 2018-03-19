#include<malloc.h>
int* rdm(int n)
{
	int *a,i;
	srand(time(NULL));
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	a[i]=rand()%100;
	
	return a;
}
