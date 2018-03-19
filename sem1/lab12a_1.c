#include<stdio.h>
int sum(int a,int b)
{
	return (a+b);
	
}
int subtract(int a,int b)
{
	return(a-b);
	
}
int multiply(int a,int b)
{
	return (a*b);
}
int divide(int a,int b)
{
	return (a/b);
}
int main()
{
	int add,sub,pro,div,a,b;
	printf("input two numbers");
	scanf("%d%d",&a,&b);
	add=sum(a,b);
	sub=subtract(a,b);
	pro=multiply(a,b);
	div=divide(a,b);
	printf("addition is %d \n subtraction is %d \n multiplication is %d \n division is %d",add,sub,pro,div);	
	return 0;
}

