#include<stdio.h>
#include<stdlib.h>
struct list
{
	int info;
	struct list *next;
};
typedef struct list node;
void print(node *list)
{
	while(list->next!=NULL)
	{
	printf("%d->",list->info);
	list=list->next;}
	printf("->NULL");
}
void create(node *list)
{
	node *loc,*temp;
	int item;
	loc=list;
	printf("Enter info:press -1 to terminate list\n");
	while(1)
	{
		printf("info?\n");
		scanf("%d",&item);
		if(item==-1)
		break;
		
		loc->info=item;
		loc->next=(node*)malloc(sizeof(node));
		loc=loc->next;
	}
	loc->next=NULL;
	
}
void main()
{
	node *head;
	head=(node*)malloc(sizeof(node));
	create(head);
	print(head);
	
}
