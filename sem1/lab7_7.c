#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
	printf("input three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
	{
	printf("a is largest");
	}
	else if((b>a)&& (b>c))
	{
	printf("b is largest");
	}
	else if((c>a)&&(c>b))
	{
	printf("c is largest");
	}
	else{
	
	printf("all are equalor two of them are equal");
	}
	getch();
	return 0;
}
