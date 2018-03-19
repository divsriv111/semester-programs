#include<stdio.h>
#include<stdio.h>
void main()
{
	int i,j,k;
	printf("ABCDEFGFEDCBA\n");
	
	for(i=7;i>0;i--)
	{
		for(j=1;j<i;j++)
		printf("%c",64+j);
		
		for(k=6;k>=2*i;k--)
		printf(" ");
		
		for(j=1;j<i;j++)
		printf("%c",64+j);
		
		printf("\n");
		
	}
getch();
 return 1;
}
