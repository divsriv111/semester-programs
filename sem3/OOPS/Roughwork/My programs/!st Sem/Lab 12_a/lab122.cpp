#include<stdio.h>
#include<conio.h>
void swap(int,int);
int main()
{
	int a,b;
	printf("Enter the first number\n");
	scanf("%d",&a);
	printf("Enter the second number\n");
	scanf("%d",&b);
	printf("a = %d ,",a);
	printf("b = %d\n",b);
	swap(a,b);
	getch();
	return(0);	
}
void swap(int x,int y)
{
	x=x+y;
	y=x-y;
	x=x-y;
	printf("Now\n a = %d ,",x);
	printf("a = %d",y);
}
