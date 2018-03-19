#include<stdio.h>
#include<conio.h>
int rec(int x)
{
	if(x==1)
	return 1;
	else
	return x*rec(x-1);
}
void main()
{
	int i;
	printf("Enter i\n");
	scanf("%d",&i);
	printf("\nFactorial = %d",rec(i));
	getch();	
}
