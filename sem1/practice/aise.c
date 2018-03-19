#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,x;
	printf("Enter the number of column to be used for pattern\n");
	scanf("%d",&x);
	

	for(i=1;i<=x;i++)
	{
	k=x-1;
		for(;k>=i;k--)
		printf(" ");
		
		for(j=1;j<=2*i-1;i++)
		printf("*");
		
		printf("\n");
		}
		getch();
		return 1;
}
