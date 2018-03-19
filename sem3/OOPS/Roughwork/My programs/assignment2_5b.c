#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,p=1;
for(i=1;i<=4;i++)
{
	for(j=4;j>=i;j--)
	 printf(" ");
	for(j=1;j<=p;j=j+2)
	 printf("%d",j);
	for(j=p-2;j>=1;j=j-2)
	 printf("%d",j);
	printf("\n");
	p=p+2;
}
getch();
}
