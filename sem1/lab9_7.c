#include<stdio.h>
int main()
{
	int sum,i,f,n;
	printf("enter total numbers to be computed");
	scanf("%d",&n);
	i=1;sum=0;
	printf("inoput n numbers");
	while(i<=n)
	{
		scanf("%d",&f);
		sum=sum+f;
		i++;
	}
	printf("sum is %d \n",sum);
	printf("average is %d",sum/n);
}
