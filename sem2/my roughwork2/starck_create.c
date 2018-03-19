#include<stdio.h>
#include<stdlib.h>
#define MAX 10
char stack[MAX];
int top=-1;
void push(char item)
{
	if(top>=MAX)
	{
	printf("Stack is full\n");
	return;}
	top++;
	stack[top]=item;
}
char pop(void)
{
	char item;
	if(empty())
	{
		printf("Stack is empty\n");
		return NULL;
	}
	item=stack[top];
	top--;
	return(item);
	
}
char stacktop(void)
{
	if(empty())
	{
		printf("Stack is empty\n");
		return NULL;
	}
	return(stack[top]);
	
}
int empty(void)
{
	if(top<0)
	return 1;
	else return 0;
}
void main()
{
	push('A');
	push('B');
	push('C');
	push('D');
	printf("poped item=%c\n",pop());
	printf("poped item=%c\n",pop());
	printf("stacktop item=%c\n",stacktop());
}
