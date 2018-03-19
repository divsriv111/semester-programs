#include<stdio.h>
#include<stdlib.h>
struct lstack{
	int info;
	struct lstack *next;
};
typedef struct lstack node;
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
	return temp;
}
void main()
{
	node *item;
	top=NULL;
	push(12);
	push(13);
	push(24);
	item=pop();
	if(item!=NULL)
	printf("Poped tem is =%d\n",item->info);
	item=pop();
	if(item!=NULL)
	printf("Poped tem is =%d\n",item->info);
	push(90);
}
