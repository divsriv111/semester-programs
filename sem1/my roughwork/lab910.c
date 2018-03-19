#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int orig,i,n,sum=0;
	printf("Enter a 5 digit number\n");
	scanf("%d",&orig);
	for(i=4;i>=0;i--)
	{
		n=orig%10;
		sum=sum+n*pow(10,i);
		orig=orig/10;
			
	}
	printf("reversed number is:%d\n",sum);
	if(sum==orig)
	printf("Original number and reversed number are same\n");
	
	else
	printf("Original number and reversed number are not same\n");
	getch();
	
}
