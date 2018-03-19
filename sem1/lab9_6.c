#include<stdio.h>
#include<conio.h>
int main()
{
	int pro=1,i,n;
	printf("\ninput a number");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		pro=pro*i;
	}
	printf("factorial is %d",pro);
	getch();
	return 0;
}
