#include<stdio.h>
int check(int n)
{
	
	static int c=0,i=0;
	if(i<n/2)
	{
		if(n%i==0)
		c++;
		i++;
		check(n);
		
		}
		return c;
}
int main()
{
	int n,k;
	printf("input a number");
	scanf("%d",&n);
	k=check(n);
	if(k==0)
	printf("prime");
	else
	printf("not a prime");
	
	getch();
	return 0;
	
}
