#include<stdio.h>
int func(int);
void main()
{
	int a,b;
	printf("enter a number\n");
	scanf("%d",&a);
	b=func(a);
	if(b==0)
	printf("Even");
	else
	printf("Odd");
	getch();
	
}
int func(int x)
{
	if(x%2==0)
	return 0;
	else
	return 1;
}
