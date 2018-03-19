#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k,m,n,h,s=1,p=2;
for(i=1;i<=5;i++)
{
	for(j=4;j>=i;j--)
	{printf(" ");
		}
		for(k=1;k<=s;k++)
		{
			printf("*");
			}
			s=s+2;
			printf("\n");
		}
		s=s-4;
		for(m=1;m<=4;m++)
		{
			for(n=1;n<=m;n++)
			{
				printf(" ");}
				for(h=1;h<=s;h++)
				{
					printf("*");
					}
				s=s-2;
				printf("\n");}
				getch();return 0;
	getch();
}
