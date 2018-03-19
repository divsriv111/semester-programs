#include<stdio.h>
#include<stdlib.h>
struct linked_stack{
	int info;
	struct linked_stack *next;
};
typedef struct linked_stack node;
node *stack,*top;
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
	{
		printf("Stack is empty\n");
		return NULL;
	}
	temp=top;
	free(top);
	top=top->next;
	return(temp);
}
void main()
{
	node *item;
	top=NULL;
	push(123);
	push(1333);
	push(1);
	item=pop();
	if(top!=NULL)
	printf("poped item=%d\n",item->info);
	item=pop();
	if(top!=NULL)
	printf("poped item=%d\n",item->info);	
}
