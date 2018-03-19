#include<stdio.h>
int main()
{
	int sum=0,n,dig;
	printf("input a number");
	scanf("%d",&n);
	while (n!=0)
	{
		dig=n%10;
		sum=sum+dig;
		n=n/10;
		
		}
		printf("sum of digits = %d",sum);
		
		getch();
}
