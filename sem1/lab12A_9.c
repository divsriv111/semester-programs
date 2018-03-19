#include<stdio.h>
int fib(int n)
{
	int i=0,a=0,b=1,sum;
	while(i<=n-1)
	{
		sum=a+b;
		printf("%d\n",b);
		a=b;
		b=sum;
		i++;
		}
		return 0;
}
int main()
{
	int n;
	printf("input number of elements of fibonacci series");
	scanf("%d",&n);
	fib(n);
	getch();
	return 0;	
}
