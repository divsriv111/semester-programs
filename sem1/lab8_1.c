#include<stdio.h>
#include<conio.h>
int main()
{int n,a,b,q;
	printf("input a number n,a ,b \n");
	scanf("%d%d%d",&n,&a,&b);
	switch(n)
	{
		case 1:
			q=a+b;
			break;
			
		case 2:
			q=a-b;
			break;
		
	    default :
			q=a*b;
						
	}
	printf("%d",q);
	getch();
	return 0;
}
