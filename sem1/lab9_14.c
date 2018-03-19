#include<stdio.h>
#include<math.h>
int main()
{
	double sum,n,c;
	printf("input a number");
	scanf("%lf",&n);
	c=1.0;sum=(1-n)/n;
	while(c<=7)
	{
	sum=sum+0.5*pow((1-n)/n,c);
	++c;
	
		}
		printf("sum is %.5lf",sum);
		getch();
		return 0;
		
}
