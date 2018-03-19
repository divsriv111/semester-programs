#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,c;
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=2*i-1;j++)
		{
		for(k=3;k>=i;k--)
		printf(" ");
		
		c=i+j;
		if((j==2*i-1)||(c=5))
		printf("*");
		
		printf("\n");
		}
	}
}
