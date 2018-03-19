#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	printf("a is greatest");
	if(b>c)
	printf("b is greatest");
	else
	printf("c is greatest");
	getch();
	
}
