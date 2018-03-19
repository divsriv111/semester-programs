#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k;
	
	for(i=1;i<=4;i++)
	{
		for(k=3;k>=i;k--)
		printf(" ");
		
		for(j=1;j<=2*i-1;j++)
		{
			if((j==1)||(j=(2*i-1)))
			printf("*");
			
			else
			printf(" ");
	
		}
				printf("\n");
	}
	getch();
	return 1;
}
