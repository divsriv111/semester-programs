#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
	int p,n;
	printf("enter a number\n");
	scanf("%d",&n);
	p=fact(n);
	printf("factorial of a no.is:%d",p);
	getch();
	return (0);
}
int fact(int a)
{
	static int factorial=1;
	if(a>0)
	{
		factorial=factorial*a;
		fact(--a);
	}
	return factorial;
}
