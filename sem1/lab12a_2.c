#include<stdio.h>
int swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swapped values are a=%d and b=%d",a,b);
	return 0;
}
int main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	swap(a,b);
	return 0;
}
