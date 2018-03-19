#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,p=1;
for(i=1;i<=4;i++)
{
	for(j=i;j<=3;j++)
	 printf(" ");
	for(j=i;j<=p;j++)
	 printf("%d",j);
	for(j=p-1;j>=i;j--)
	 printf("%d",j);
	 p=p+2;
	 printf("\n");
}	
for(i=3;i>=1;i--)
{
	for(j=3;j>=i;j--)
	 printf(" ");
	for(j=i;j<=p-4;j++)
	 printf("%d",j);
	for(j=p-5;j>=i;j--)
	 printf("%d",j);
	p=p-2;
	printf("\n");
}
getch();
}
