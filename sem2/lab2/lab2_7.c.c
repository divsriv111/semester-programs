#include<stdio.h>
int *p;
char *c;
float *f;
void main()
{
	
	*p++;
	*c++;
	*f++;
	printf("size of int=%d\n",p);
	printf("size of char=%d\n",c);
	printf("size of float=%d",f);
	return 1;
}
