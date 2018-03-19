#include<stdio.h>		//Calculator
#include<conio.h>
int main()
{
	int a,b,ch;
	printf("Enter the value of a and b,to which operation is to be performed");
	scanf("%d%d",&a,&b);
	
	printf("Enter the choice\n\n 1 for addition\n2 for subtraction\n3 for multiplication\n4 for division");
	scanf("%d",&ch);
	
	switch(ch)
	
	{case 1:
	printf("\nsum=%d",a+b);
	break;
	
	case 2:
		printf("\ndiffrence=%d",a-b);
		break;
		
	case 3:
		printf("\nproduct=%d",a*b);
		break;
		
	case 4:
		printf("\ndivision=%d",a/b);
		break;}
	getch();
	return 0;
}
	
