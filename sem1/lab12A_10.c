#include<stdio.h>
#include<math.h>
int bindec(long n)
{
	int c=0,dig,sum=0;
	while(n!=0)
	{
		dig=n%10;
		sum=sum+dig*pow(2,c);
		n=n/10;++c;		
		}
	return sum;
	
	

}
int main()
{
		long k, n;
	printf("input binary number");
	scanf("%d",&n);
	k=bindec(n);
	printf("decimal number is= %d",k);
	getch();
	return 0;
}
