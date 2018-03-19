#include<stdio.h>
int main()
{
	char w[10][10]={ "zero","one","two","three","four","five","six","seven","eight","nine"};
	int a[10],i,c=0,n;
	printf("Enter a number\n");
	scanf("%d",&n);
	while(n>0)
	{
		a[c]=n%10;
		c++;
		n=n/10;
	}
	for(i=c-1;i>=0;i--)
	printf("%s\t",w[a[i]]);
	return 0;
}
