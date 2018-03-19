#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=4;j>i;j--)
		printf(" ");
		for(j=1;j<=i*2-1;j++)
		{
			if(j%2==0)
			printf(" ");
			else
			printf("%d",i);
			
			}
			printf("\n");
			
		}
		for(i=3;i>=1;i--)
		{
			for(j=3;j>=i;j--)
			printf(" ");
			for(j=1;j<=i*2-1;j++)
			{if(j%2==0)
			printf(" ");
			else
			printf("%d",i);}
			printf("\n");
			}
			getch();
			return 0;
}
