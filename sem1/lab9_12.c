#include<stdio.h>
int main()
{
	int n,a=0,b=0,c=0;
	printf("input -999 to exit\n");
	while(n!=-999)
	{
		printf("input numbers\n");
		scanf("%d",&n);
		if(n<0)
		a++;
		else if(n==0)
		b++;
		else if(n>0)
		c++;
		}
	printf("\nnumber of negative numbers entered %d",a);
	printf("\nnumber of zeroes numbers entered %d",b);
	printf("\nnumber of positive numbers entered %d",c);
	getch();
	
}
