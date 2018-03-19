#include<stdio.h>
#include<conio.h>
int main()
{int n;
	printf("input a number");
	scanf("%d",&n);
	switch(n)
	{
		case 1: 
		case 2:
		case 3:
		case 4: 
		case 5:
		case 6:
	    case 7: 
		case 8:
		case 9:
		case 10: n=n*n; break;
		case 11:
		case 12:
	    case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20: n=n*n*n; break;
		
		default:
			n=n;
		
	}
	printf("%d",n);
	getch();
	return 0;
}
