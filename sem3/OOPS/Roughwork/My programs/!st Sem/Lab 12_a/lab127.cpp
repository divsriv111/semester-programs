#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
	int a,c;
	printf("Enter the number\n");
	scanf("%d",&a);
	c=fact(a);
	printf("Factorial of the given number is %d ",c);
	getch();
	return(0);	
}
int fact(int x)
{
	int f=1;
	for(int i=1;i<=x;i++)
	{
		f=f*i;
	}
	return f;
}
