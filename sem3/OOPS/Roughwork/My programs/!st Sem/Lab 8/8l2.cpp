#include<stdio.h>
void main()
{
int n,p;
printf("enter number");
scanf("%d",&n);
switch(n)
{
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:p=n*n;
		  printf("the number is%d",p);
break;
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 17:
case 18:
case 19:
case 20:p=n*n*n;
			printf("the number is%d",p);
break;
default: printf("the number is%d",n);
break;
}
}
