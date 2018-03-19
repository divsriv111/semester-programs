#include<stdio.h>
#include<conio.h>
void main()
{
	double n,p=1;
	int i;
	printf("Enter a number:\n");
	scanf("%lf",&n);
	
	for(i=1;i<=n;i++)
	p=i*p;
	
	printf("Factorial is=%lf",p);
	getch();
}
