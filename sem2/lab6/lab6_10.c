#include<stdio.h>
#include<stdlib.h>
struct linked_stack
{
	int info;
	struct linked_stack *next;
};
typedef struct linked_stack node;
node *top,*stack;
void push(int itm)
{
	stack=(node*)malloc(sizeof(node));
	stack->info=itm;
	stack->next=top;
	top=stack;
}
node *pop(void)
{
	node *temp;
	if(top==NULL)
	{printf("\nstack is empty");
	return NULL;}
	temp=top->next;
	free(top);
	top=temp;
	return temp;
}
void main()
{
	node *item; top=NULL;
	push(20);
	push(40);
	push(30);
	item=pop();
	if(item!=NULL)
	printf("poped item=%d",item->info);
	item=pop();
	if(item!=NULL)
	printf("\npoped item=%d",item->info);
}
