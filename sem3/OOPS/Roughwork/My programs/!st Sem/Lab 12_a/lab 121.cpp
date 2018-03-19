#include<stdio.h>
#include<conio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
float div(int,int);
int main()
{
	int c,a,b,ans;
	printf("Enter the first number\n");
	scanf("%d",&a);
	printf("Enter the second number\n");
	scanf("%d",&b);
	printf("Enter your choice\n");
	scanf("%d",&c);
	if(c==1)
	{
		ans=add(a,b);
		printf("Sum = %d ",ans);
    }
    else if(c==2)
    {
    	ans=sub(a,b);
    	printf("Difference = %d ",ans);
    }
    else if(c==3)
    {
    	ans=mul(a,b);
    	printf("Product = %d ",ans);
    }
    else
    {
    	float ans=div(a,b);
    	printf("Division = %f ",ans);
    }
    getch();
    return(0);
}
int add(int x,int y)
{
	int an=x+y;
	return(an);
}
int sub(int x,int y)
{
	int an=x-y;
	return(an);
}
int mul(int x,int y)
{
	int an=x*y;
	return(an);
}
float div(int x,int y)
{
	float an=x/y;
	return(an);
}


