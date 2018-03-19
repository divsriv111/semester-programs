#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,c=0;
	printf("Enter a number:\n");
	scanf("%d",&a);
	
	if(a==1)
	printf("1 is neither Prime nor cofactor\n");
	else
	{
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			{c++;
			break;}
			else
			continue;
		}
	}
	if(c!=0)
	printf("Not a prime number\n");
	else
	printf("Prime number\n");
	getch();
}
