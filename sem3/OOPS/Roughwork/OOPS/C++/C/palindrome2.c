#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,i,temp,sum=0,k;
	scanf("%d",&n);
	temp=n;
	for(i=1;temp!=0;i++)
	{
		k=temp%10;
		sum=sum+pow(k,3);
		temp=temp/10;
	}
	if(sum==n)
	printf("\nANGSTROME\n");
	else
	printf("\nNOT ANGSTROME\n");
	getch();
}
