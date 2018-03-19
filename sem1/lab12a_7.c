#include<stdio.h>
int fact(int a)
{
	int f=1,i;
	for(i=1;i<a;i++)
	f=f+f*i;
	return f;
}
int main()
{
	int n,f;
	printf("input a number");
	scanf("%d",&n);
	f=fact(n);
	printf("factorial is %d",f);
	return 0;
}
