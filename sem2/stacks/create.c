#include<stdio.h>
#define MAX 10
int top=-1;
char stack[MAX];
void push(char);
char pop(void);
char stacktop(void);
int empty(void);
void main()
{
	push('A');
	push('B');
	push('C');
	printf("\n item poped=%c",pop());
	push('D');
	push('E');
	printf("\n item poped=%c",pop());
	printf("\nstacktop=%c",stacktop());
	printf("\nitem poped=%c",pop());
}
void push(char itm)
{
	if(top>=MAX)
	{
		printf("\nStack is full");
		return;
	}
	top++;
	stack[top]=itm;
}
char pop(void)
{
	char itm;
	if(empty())
	{
		printf("\nStack is empty");
		return NULL;
	}
	itm=stack[top];
	top--;
	return itm;
}
char stacktop(void)
{
	if(empty())
	{
		printf("\Stack is empty");
		return NULL;
	}
	else
	return(stack[top]);
}
int empty(void)
{
	if(top<0)
	return 1;
	else
	return 0;
}
