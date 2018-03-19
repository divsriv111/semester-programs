#include<stdio.h>
char stack[5];
int top=-1;
void push(char itm)
{
	if(top>=4)
	{
		printf("\nstack is full!!");
		return;
	}
	top++;
	stack[top]=itm;	
}
void main()
{
	push('A');
	push('B');
	push('B');
	push('B');
	push('B');
	push('B');
}
