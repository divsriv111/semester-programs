#include<stdio.h>
#include<conio.h>
int fact=1;
int f(int n)
{
	fact=fact*n;
	if(n>0)
	f(n--);
	else
	return fact;
}
int main()
{
	int k,n;
	scanf("%d",&n);
    k=f(n);
	printf("%d",k);
	getch();
	return 0;
	
}
	
	
	

