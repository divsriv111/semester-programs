#include<stdio.h>
#include<math.h>
int decbin(int n)
{
	long c=0,dig,sum=0;
	while(n!=0)
	{
		dig=n%2;
		sum=sum+dig*pow(10,c);
		n=n/2;++c;		
		}
	return sum;
	
	

}
int main()
{
		int k, n;
	printf("input decimal number");
	scanf("%d",&n);
	k=decbin(n);
	printf("binary number is= %d",k);
	getch();
	return 0;
}
