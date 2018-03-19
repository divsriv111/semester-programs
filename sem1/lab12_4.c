#include<stdio.h>
int sumofdigits(int n)
{
	static int sum=0;
	int dig;
		if(n!=0)
	{
		dig=n%10;
		sum=sum+dig;
		sumofdigits(n/10);		
		}
		else
		return sum;	
}
int main()
{
	int k,n;
	printf("input a number");
	scanf("%d",&n);
	k=sumofdigits(n);
	printf("sum of digits is =%d",k);
	getch();
	return 0;
	
	
	
}
