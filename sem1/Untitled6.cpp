#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k;
	
	for(i=1;i<=4;i++)
	{
		for(j=4;j>i;j--)
		printf(" ");
		
		for(j=i;j<=i*2-1;j++)
		{
			if(j<=i*2-1)
			printf("%d",j);
			else
			{
				for(k=i*2-2;k>=1;k--)
				printf("%d",k);
				
			}
			}
			printf("\n");
		}
		getch();
		return 0;
	
}
