#include<stdio.h>
#include<stdlib.h>
struct doubly{
	int info;
	struct doubly *prev;
	struct doubly *next;
};
typedef struct doubly node;
node *head,*last;
void create(node *list)
{
	node *temp=NULL;
	int itm;
	printf("Enter info:press -1 to terminate the list\n");
	while(1)
	{
		printf("info?\n");
		scanf("%d",&itm);
		if(itm==-1)
		break;
		list->info=itm;
		list->prev=temp;
		temp=list;
		list->next=(node*)malloc(sizeof(node));
		list=list->next;	
	}
	list->next=NULL;
}
void print(node *list)
{
	while(list->next!=NULL)
	{
		printf(" %d",list->info);
		list=list->next;
	}
	printf(" NULL");
}
void main()
{
	head=(node*)malloc(sizeof(node));
	last=head;
	head->next=head->prev=NULL;
	create(head);
	print(head);
}
