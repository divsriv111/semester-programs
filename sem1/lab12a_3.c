#include<stdio.h>
int check(int n)
{
	if(n%2==0)
	printf("even number");
	else
	printf("odd number");
		
}
int main()
{
	int n;
	printf("input a number");
	scanf("%d",&n);
	check(n);
	
}
