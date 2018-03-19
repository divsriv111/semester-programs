#include<stdio.h>
int main()
{
	int i,j,k;
	printf("ABCDEFGFEDCBA\n");
	
	for(i=1;i<=6;i++)
	{
		for(j=6;j>=i;j--)
		printf("%c",64+j);
		
		printf("\n");
		
		
		
	}
	return 1;
}
