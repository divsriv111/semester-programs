#include<stdio.h>
#include<conio.h>
int evod(int);
int main()
{
	int a,b,c;
	printf("Enter the number\n");
	scanf("%d",&a);
	c=evod(a);
	if(c==1)
	{
		printf("Number is even");
		
	}
	else
	{
		printf("Number is odd");
	}
	getch();
	return(0);	
}
int evod(int x)
{
	if(x%2==0)
	{
		return 1;
	}
	return 0;

}
