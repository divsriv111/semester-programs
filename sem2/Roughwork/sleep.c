#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int y=0;
void a()
{
	int i;
	if(y)
	{
	if(y==3)
	printf("Slow Internet Please wait\n");
	printf("Your Download will start in 0\n");
	}
	else
	{
	printf("Your Download will start in ");
	for(i=5;i>=0;i--)
	{
		printf("%d\b",i);
		sleep(0.2);
	}
	}
}
int main()
{
	int i,j,k,x;
	while(1)
	{
		a();
		y++;
	for(i=5;i>=0;i--)
	{
		if(i==0)
		{
			printf("\n");
			for(x=0;x<4;x++)
			{
			printf("   ****\n");
			sleep(0.2);
			}
			for(i=5;i>=1;i--)
		{
			for(j=5;j>=i;j--)
			{printf(" ");
			}
			for(j=1;j<=i*2-2;j++)
			printf("*");
		    if(i==1)
		    printf("*");
		    sleep(0.2);
			printf("\n");
			}
		}
		
	}
	system("cls");
	
	}
	return 1;
	
}
