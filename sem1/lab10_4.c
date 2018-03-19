#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{k=i+j;
			if((i==j)||(k==6))
			printf("*");
			else
			printf(" ");
						}
		printf("\n");
		
		
		}
		getch();
		return 0;
}
