#include<stdio.h>
#include<conio.h>
int fib(int n,int c)
{
    static int sum;
    static int a=0,b=1;
    
    if(c<n)
   	{sum=a+b;
	   a=b;
	b=sum;
         
	fib(n,++c);
	}
	
	return b;
	}
int main()
{
	int k,j;
	printf("input a nth term to be found ");
	scanf("%d",&j);
	k=fib(j,0);
	printf("nth term is %d",k);
	getch();
	return 0;
}	
	
	
	
	
	

