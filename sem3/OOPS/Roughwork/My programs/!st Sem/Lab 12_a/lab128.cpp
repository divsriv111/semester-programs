#include<stdio.h>
#include<conio.h>

void fa(int);
int main()
{
	int a,b,c;
	printf("Enter the number\n");
	scanf("%d",&a);
    fa(a);
	getch();
	return(0);	
}
void fa(int x)
{
	for(int i=1;i<=x/2;i++)
	{
		if(x%i==0)
		{
			printf("%d\n",i);
		}
	}
	printf("%d",x);
}
