#include<stdio.h>
int wait(int n)
{
	int i;
	for(i=0;i<n*10000000;i++)
	{}
	return;
}
