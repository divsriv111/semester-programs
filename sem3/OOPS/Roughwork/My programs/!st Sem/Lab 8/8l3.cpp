#include<stdio.h>
void main()
{
int ch,n,f=1,fact=1,c=0;
printf("enter choice 1. factorial /n 2.prime or not /n3. even or odd");
scanf("%d",&ch);
printf("enter number");
scanf("%d",&n);
switch(ch)
{
case 1: while(f<=n)
		  {
			fact=fact*f;
			f=f+1;
			}
			printf("factorial is %d",fact);
break;
case 2:if(n%2==0)
		  {
		  c=c+1;
		  }
		  if(c==2)
		  printf("number is prime");
		  else
		  printf("number is not prime");
 break;
 case 3:if(n%2==0)
			printf("the number is even");
		  else
		  printf("number is odd");
 break;
 default : printf("invalid choice");
  break;
  }
  }