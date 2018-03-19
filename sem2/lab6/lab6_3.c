#include<stdio.h>
#define MAX 5
char stack[MAX];
int top=-1;
void push(char itm)
{
	if(top>=MAX)
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
	printf("pushed item=A B\n");
	printf("poped item=%c",pop());
}
