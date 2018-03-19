#include<stdio.h>
#include<conio.h>
int main()
{
	int n,f,s,t,sum=0;
	printf("\n Input a 3digit number\n");
	scanf("%d",&n);
	
	f=n%10	;sum=sum+f*f;	n=n/10;
	s=n%10	;sum=sum+s*s;	n=n/10;
	t=n%10	;sum=sum+t*t;	n=n/10;
	printf("\nsum of Digit is=%d",sum);
	
	getch();
	return 0;
}
