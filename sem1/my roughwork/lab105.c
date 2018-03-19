#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k;
	printf("ABCDEFGFEDCBA\n");
	
	for(i=1;i<=6;i++)
	{
	
	for(j=6;j>=i;j--)
	printf("%c",71-j);
	
	for(k=1;k<=2*i-1;k++)
	printf(" ");
	
	for(j=6;j>=i;j--)
	printf("%c",64+j);
	
	printf("\n");
	
	
	
	}
	getch();
	return 0;
}
