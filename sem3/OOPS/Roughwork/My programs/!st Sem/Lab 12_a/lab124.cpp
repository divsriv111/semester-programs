#include<stdio.h>
#include<conio.h>
int hcf(int,int);
int main()
{
	int a,b,c;
	printf("Enter the first number\n");
	scanf("%d",&a);
	printf("Enter the second number\n");
	scanf("%d",&b);
	c=hcf(a,b);
	printf("hcf of the two numbers is = %d ",c);
	getch();
	return(0);	
}
int hcf(int x,int y)
{
	int s=x<y?x:y; 
	for(int i=2;i<=s;i++)
	{
		if(x%i==0&&y%i==0)
		{
			return i;
		}
	}
	return 1;
}
