#include<stdio.h>
int division(int a,int b)
{
	int c=0;
	while(a!=0)
	{
		a=a-b;
		if(a!=0)
		++c;
		
	}
	return c;
}
int main()
