#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m,f,s,t,temp;
	printf("\nEnter 3 diffrent digit number");
	scanf("%d",&n);
	
	
	f=n/100;
	t=("%d",n)%10;
	{
	temp=("%d",n)/10;
	s=temp%10;
	}
	
	if((f<s)&&(f<t))
	m=f*f;
	
	if((s<f)&&(s<t))
	m=s*s;
	
	if((t<s)&&(t<f))
	m=f*f;
	
	printf("sqr of smaller digit is=%d",m);
	getch();
	return 0;
}
