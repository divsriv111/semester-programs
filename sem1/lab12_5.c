#include<stdio.h>
int sum(int n)
{
	
	static int s=0;int k;
	if(n!=0)
		{
			scanf("%d",&k);
			s=s+k;
			sum(n-1);			
			}
	else
	return s;	
			
}
int main()
{
	int k,n;
	printf("input total numbers to be added");
	scanf("%d",&n);
	printf("input  numbers\n");
	k=sum(n);
	printf("sum of numbers=%d",k);
	getch();
	return 0;
}
