#include<stdio.h>
#include<stdio.h>
void main()
{
	int i,j,k;
	printf("ABCDEFGFEDCBA");
	
	for(i=8;i>0;i--)
	{
		for(j=1;j<i;j++)
		printf("%c",64+j);
		
		printf("\n");
		
	}
getch();
}
