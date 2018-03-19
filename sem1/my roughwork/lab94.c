#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	printf("Enter a number:\n");
	scanf("%d",&n);
	printf("Divisors are:\n");
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("%d\t",i);
		continue;
	}
	getch();
}
