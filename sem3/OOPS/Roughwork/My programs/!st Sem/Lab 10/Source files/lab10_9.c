#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,p=1,n;
	printf("Enter a no. plzzz...\n");
	scanf("%d",&n);
    for(i=1;i<=n;i++)
     {
     	for(j=1;j<=n-i;j++)
     	printf(" ");
     	for(k=1;k<=p;k++)
     	printf("*");
     	p=p+2;
     	printf("\n");
     }
getch();
}
