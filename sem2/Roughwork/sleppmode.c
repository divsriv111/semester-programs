#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,x,y=0;
	printf("Your Download will start in ");
	for(i=5;i>=0;i--)
	{
		printf("%d\b",i);
		sleep(0.2);
	}
	while(1)
	{
	for(i=5;i>=0;i--)
	{
		y++;
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
	if(y==6)
	{
	for(i=0;i<=5;i++)
	{
		if(i==5)
		{
			printf("\b");
			for(x=4;x>0;x--)
			{
			printf("\b\b\b\b\b\b\b\b");
			}
			for(i=1;i<=5;i++)
		{
			for(j=i;j<=5;j++)
			{printf("\b");
			}
			for(j=i*2-2;j>=1;j--)
			printf("\b");
		    if(i==5)
		    printf("\b");
			printf("\b");
			}
		}
		
	}
	}
	}
	return 0;
	
}
