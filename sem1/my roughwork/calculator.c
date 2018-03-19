#include<stdio.h>		//Calculator
#include<conio.h>
int main()
{
	int ch;
	float a,b;
	printf("Enter the value of a and b\n");
	scanf("%f%f",&a,&b);
	
	printf("Enter the choice\n\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division");
	scanf("%d",&ch);
	
	switch(ch)
	
	{
	case 1:
	printf("\nsum=%f",a+b);
	break;
	
	case 2:
		printf("\ndiffrence=%f",a-b);
		break;
		
	case 3:
		printf("\nproduct=%f",a*b);
		break;
		
	case 4:
		printf("\ndivision=%f",a/b);
		break;}
	getch();
	return 0;
}
	
