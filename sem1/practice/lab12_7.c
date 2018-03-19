#include<stdio.h>
void fac(int);
void main()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	fac(n);
	getch();
}
void fac(int c)
{
	int i,m=1;
	for(i=1;i<=c;i++)
	m=m*i;
	printf("Fcatorial is=%d",m);
}
