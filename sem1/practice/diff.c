#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int x,n,temp;
	printf("\nEnter the power n of x whose diffrentiation is to be calculated");
	scanf("%d",&n);
	
	temp=n*pow(x,n-1);
	
	printf("\nDiffrentiation is=%d",temp);
	
	getch();
	return 1;
}
	
