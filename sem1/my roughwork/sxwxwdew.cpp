#include<stdio.h>
#include<conio.h>
int main()
{
	int i,c,j,k;
	for(i=1;i<=5;i++)
	{c=1;
		for(j=5;j>i;j--)
		printf(" ");
		
		for(k=1;k<=2*i-1;k++)
		{
			
			if(k%2==0)
			printf(" ");
		else
		{
		printf("%c",91-c);
		c++;}
	}
	printf("\n");
	}
}
