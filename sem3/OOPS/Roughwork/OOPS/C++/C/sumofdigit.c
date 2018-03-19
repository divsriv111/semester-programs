#include<stdio.h>
void main()
{
	int i;
	double sum=0;
	for(i=1;i<=75000;i++)
	sum=i+sum;
	
	printf("%d",sum);
}
