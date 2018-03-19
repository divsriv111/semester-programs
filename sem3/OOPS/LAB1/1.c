#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	printf("Enter i\n");
	scanf("%d",&i);
	printf("\nEnter j\n");
	scanf("%d",&j);
	for(k=1;;k++)
	{
		i=i+k;
		if(i%j==0)
		break;
	}
	printf("\n%d",i);
	getch();	
}
