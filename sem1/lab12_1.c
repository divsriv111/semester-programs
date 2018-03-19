#include<stdio.h>
#include<conio.h>

int f(int n)
{
	static int fact=1;
	if(n>0)
	{fact=fact*n;
	n=n-1;
	f(n);
	}else
	return fact;
}
int main()
{	     							
	int k=0,n;
	printf("input a number");
	scanf("%d",&n);
    k=f(n);
	printf("%d",k);
	getch();
	return 0;
	
}
	
	
	

