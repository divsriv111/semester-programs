#include<stdio.h>
#include<conio.h>
int main()
{int n,ch,i=0,c=0,fact=0;
	printf("enter a number");
	scanf("%d",&n);
	printf("enter 1 for factorial of a number \n enter 2 for checking prime \n enter 3 to check odd or even \n 4 to exit \n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			while(n!=0)
			{fact=fact*n;
			n=n-1;
			} printf("%d",fact);break;
		case 2:
			while(i<=n)
			{
				if(n%i==0)
				c++;
				i=i+1;
				}
				if(c<=2)
				{
					printf("its a prime number");
					}
					else 
					printf("not a prime number");
					break;
		case 3:
			if(n%2==0)
			printf("even number");
			else
			printf("odd number");
			break;
		case 4: break;
	}
	getch();
	return 0;
}
