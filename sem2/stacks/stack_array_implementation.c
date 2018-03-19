#include<stdio.h>
#define MAX 10
char stack[MAX];
int top1,top2,count;
void push1(char item)
{
	if(count>=MAX)
	printf("\nstack is full");
	top1++;
	if(stack[top1]==NULL)
	{
	stack[top1]=item;
	count++;}
	else top1--;
}
void push2(char item)
{
	if(count>=MAX)
	printf("\nStack is full");
	top2--;
	if(stack[top2]==NULL)
	{
		stack[top2]=item;
		count++;
	}
	else top2++;
}
char pop1(void)
{
	char item;
	if(top1==-1)
	{
		printf("\nStack is empty");
		return NULL;
	}
	item=stack[top1];
	stack[top1]=NULL;
	top1--;
	count--;
	return item;
}
char pop2(void)
{
	char item;
	if(top2==MAX)
	{
		printf("\nStack is empty");
		return NULL;
	}
	item=stack[top2];
	stack[top2]=NULL;
	top2++;
	count--;
	return item;
}
void main()
{
	top1=-1,top2=MAX,count=0;
	push1('A');
	push1('B');
	push1('C');
	push2('D');
	push2('E');
	push2('F');
	printf("poped item from 1st array=%c\n",pop1());
	printf("poped item from 2st array=%c",pop2());
	push1('Z');
}
