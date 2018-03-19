#include<stdio.h>
int main()
{
	int *i;
	int j;
	i=&j;
	printf("%d\n",i);
	printf("%d\n",j);
	j=5;
	printf("%d\n",*i);
	return 0;
}
