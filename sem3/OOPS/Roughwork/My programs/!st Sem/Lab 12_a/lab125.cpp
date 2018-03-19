#include<stdio.h>
#include<conio.h>
#include<math.h>
int prime(int);
int main()
{
	int a,b,c;
	printf("Enter the number\n");
	scanf("%d",&a);
	c=prime(a);
	if(c==1)
	{
		printf("Number is prime");
		
	}
	else
	{
		printf("Number is not prime");
	}
	getch();
	return(0);	
}
int prime(int x)
{
	for(int i=2;i<=pow(x,(1/2));i++)
	{
		if(x%i==0)
		{
			return 0;
		}
	}
	return 1;
}
