#include<stdio.h>
int myfunc(int);
void main()
{
	int p,x;
	scanf("%d",x);
	p=myfunc(x);
	
	if(p==0)
	printf("invalid input\n");
	else
	{
		
	}
	
}
int myfunc(int o)
{
	int i;
	char ch;
	ch=i;
	if((ch>=65)||(ch<=90)||(ch>=97)||(ch<=122)||(ch>=0)||(ch<=47)||(ch>=58)||(ch<=64)||(ch>=91)||(ch<=96)||(ch>=123)||(ch<=127))
	return(0);
	else
	return(1);
}
