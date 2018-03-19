#include<stdio.h>
int factors(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("%d\n",i);
		
	}

}
int main()
{
	int n,f;
	printf("input a number");
	scanf("%d",&n);
	printf("factors are ");
	factors(n);

	return 0;
}
