#include<stdio.h>
int main()
{
	int x,y,product=1;
	printf("input x and y");
	scanf("%d%d",&x,&y);
	while (y>0)
	{
		product=product*x;
		y--;
	}
	printf("x to the power y is = %d",product);
}
