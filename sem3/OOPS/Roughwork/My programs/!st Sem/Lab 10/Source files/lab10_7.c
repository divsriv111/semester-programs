#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j;
	printf("Plz enter a no.\n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
     {
     	for(j=1;j<=i;j++)
     	printf("*");
     	printf("\n");
     }
getch();
}
