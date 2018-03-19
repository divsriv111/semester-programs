#include<stdio.h>
int main()
{
	int ams=0;int n,dig;int orig;
	printf("input a number");
	scanf("%d",&n);
	orig=n;
		while (n!=0)
	{
		dig=n%10;
		ams=ams+dig*dig*dig;
		n=n/10;
		
		}
		if(orig==ams)
		printf("amstrong number");
		else
		printf("not a amstrong number");
		getch();
		return 0;
		
}
