#include<stdio.h>
#include<stdlib.h>
struct linked_stack{
	int info;
	struct linked_stack *next;
};
typedef struct linked_stack node;
node *top,*stack;
void push(int item)
{
	stack=(node*)malloc(sizeof(node));
	stack->info=item;
	stack->next=top;
	top=stack;
}
node *pop(void)
{
	node *temp;
	if(top==NULL)
	{printf("\nStack is empty");
	return NULL;}
	temp=top;
	free(top);
	top=temp->next;
	return temp;
}
void main()
{
	node *item; top=NULL;
	push(12);
	push(13);
	push(20);
	item=pop();
	if(item!=NULL)
	printf("Poped item=%d",item->info);
	item=pop();
	if(item!=NULL)
	printf("\nPoped item=%d",item->info);
	push(95);
}
