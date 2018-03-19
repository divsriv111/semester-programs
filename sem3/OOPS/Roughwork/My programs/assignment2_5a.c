#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
for(i=90;i>=86                                                                           ;i--)
{
	for(j=85;j<=i-1;j++)
	 printf(" ");
	for(j=90;j>=i;j--)
	 printf("%c ",j);
	 printf("\n");
}
	getch();
}
