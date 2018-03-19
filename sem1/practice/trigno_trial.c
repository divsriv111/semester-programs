#include<stdio.h>
#include<conio.h>
int main()
{
	int x,ch;

	printf("\nDegree?\n");
	scanf("%d",&x);
	
	printf("\nFor sin (1) or cos (2)?\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		
		case 1:
			if(x==0)
			printf("sin0=0");
			
			if(x==30)
			printf("sin30=0.5");
			
			if(x==45)
			printf("sin45=0.707");
			
			if(x==60)
			printf("sin60=0.866");
			
			if(x==90)
			printf("sin90=1");
			break;
			
		case 2:
			if(x==0)
			printf("cos0=1");
			
			if(x==30)
			printf("cos30=0.866");
			
			if(x==45)
			printf("cos45=0.707");
			
			if(x==60)
			printf("cos60=0.5");
			
			if(x==90)
			printf("cos90=0");
			break;
			
			default: printf("\nInvalid choice");
		
		
	}
			getch();
			return 1;
			
			
}
