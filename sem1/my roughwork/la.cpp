#include<stdio.h>
#include<conio.h>
int main()
{
	inti,j,k;
	
	for(i=1;i<=6;i++)
	{
		for(k=5;k>=i;k--)
		printf(" ");
		
		for(j=1;j<=i;j++)
		printf("*")
		
		printf("\n");
	}
	getch();
}
