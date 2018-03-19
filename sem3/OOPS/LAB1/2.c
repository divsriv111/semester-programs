#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j=0;
	printf("Enter a number\n");
	scanf("%d",&i);
	
	while(i!=0)
	{
		j++;
		i=i/10;
	}
	printf("\nNumber of digits %d",j);
	getch();	
}
