#include<stdio.h>
#include<conio.h>
int main()
{
	int x;
	char ch,sin,cos;
	printf("\nsin or cos?");
	scanf("%c",&ch);
	
	printf("\ndegree?");
	scanf("%d",&x);
	
	switch(ch)
	{
		
		{case sin:
			{if(x==0)
			printf("sin0=0");
			
			if(x==30)
			printf("sin30=0.5");
			
			if(x==45)
			printf("sin45=0.707");
			
			if(x==60)
			printf("sin60=0.866");
			
			if(x==90)
			printf("sin90=1");
			break;}
	   }	
		{case cos:
			{if(x==0)
			printf("cos0=1");
			
			if(x==30)
			printf("cos30=0.866");
			
			if(x==45)
			printf("cos45=0.707");
			
			if(x==60)
			printf("cos60=0.5");
			
			if(x==90)
			printf("cos90=0");
			break;}
			
		}
		
		}
			getch();
			return 0;
			
			
}
