#include<stdio.h>
int main()
{
	int rev=0;int n,dig;int orig;
	printf("input a number");
	scanf("%d",&n);
	orig=n;
		while (n!=0)
	{
		dig=n%10;
		rev=rev*10+dig;
		n=n/10;
		
		}
		if(orig==rev)
		printf("equal");
		else
		printf("not equal");
		getch();
		return 0;
		
}
