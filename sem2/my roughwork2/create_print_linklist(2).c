#include<stdio.h>
#include<stdlib.h>
struct link
{
	int info;
	struct link *next;
};
typedef struct link node;
void create(node *list);
void print(node *list);
void main()
{
	node *head;
	head=(node*)malloc(sizeof(node));
	create(head);
	print(head);
}
void create(node *list)
{
	int item;
	node *loc;
	printf("ENter info:enter -1 to terminate list\n");
	while(1)
	{
		printf("info\n");
		scanf("%d",&item);
		if(item==-1)
		break;
		loc=list;
		list->info=item;
		list->next=(node*)malloc(sizeof(node));
		list=list->next;
	}
	loc->next=NULL;
}
void print(node *list)
{
	while(list!=NULL)
	{
		printf("%d ",list->info);
		list=list->next;
	}
}
