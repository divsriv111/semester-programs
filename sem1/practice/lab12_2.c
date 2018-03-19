#include<stdio.h>
void swapv(int *,int *);
void main()
{
	int a,b;
	printf("enter any 2 numbers\n");
	scanf("%d%d",&a,&b);
	swapv(&a,&b);
	getch();
	return 0;
}
void swapv(int *m,int *n)
{
	int t;
	t=m;
	n=*m;
	n=t;
}
