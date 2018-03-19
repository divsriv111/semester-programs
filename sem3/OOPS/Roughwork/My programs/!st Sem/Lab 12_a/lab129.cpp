#include<stdio.h>
#include<conio.h>
int btd(int);
int pow(int,int);
int main()
{
	int a;
	int deci;
	
	printf("Enter any binary number\n");
	scanf("%d",&a);
	deci=btd(a);
	printf("The decimal equivalent for binary number %d ",a);
	printf("is %d ",deci);
	getch();
	return(0);
}

int btd(int x)
{
	int eq=0;
	int p=0;
	while (x!=0)
	{
		int d=x%10;
		eq=eq+(d*pow(2,p));
		x=x/10;
		p++;	
	}
	return eq;
}
int pow(int z,int y)
{
	int sum=0;
	for(int i=0;i<=y;i++)
	{
		sum=sum+z;	
	}
	return sum;
}
