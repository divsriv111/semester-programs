#include<stdio.h>
#include<stdlib.h>
void main()
{

	int i,j,k;
	for(i=5;i>=1;i--)
	{
		printf("Your Downloading starts in %d",i);
		for(k=1;k<=100000000;k++)
		continue;
		system("cls");
	}
	for(k=1;k>=1;k++)
	{
	printf("DOWNLOADING");
	printf("\n\n");
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=2;j++)
		 printf(" ");
		for(j=1;j<=3;j++)
		 printf("*");
		for(j=1;j<=25000000;j++)
		 continue;  
		printf("\n");
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=i;j++)
		 printf(" ");
        for(j=1;j<=5-2*i;j++)
		 printf("*");
			for(j=1;j<=25000000;j++)
		 continue;  
		printf("\n"); 		 
	}
system("cls");
 }
}

