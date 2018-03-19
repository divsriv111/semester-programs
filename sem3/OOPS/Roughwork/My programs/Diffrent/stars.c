#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,k,l=0,m=0;
	char a[20][20];
	for(k=1;k>0;k++)
	{
			printf("TWINKLE TWINKLE\n");
	for(i=0;i<19;i++)
	{
		for(j=0;j<19;j++)
		{
			l=rand()%19;
			m=rand()%19;
		if(i==l&&j==m)
		{
			a[i][j]='*';
			printf("%c",a[i][j]);
		}
        else
        printf(" ");
		}
		printf("\n");
	}
	for(j=0;j<=30000000;j++)
	{}
	system("cls");
    }
    getch();
}
