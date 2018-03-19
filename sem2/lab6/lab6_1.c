#include<stdio.h>
char stack[5];
int top=-1;
void push(char itm)
{
	if(top>=5)
	{
		printf("\nstack is full!!");
		return;
	}
	top++;
	stack[top]=itm;	
}
char pop(void)
{
	char itm;
	if(top<0)
	{
		printf("\nstack is empty");
		return NULL;
	}
	itm=stack[top];
	top--;
	return itm;
}
void main()
{
	push('A');
	push('B');
	printf("poped item=%c",pop());
}
