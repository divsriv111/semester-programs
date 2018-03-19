#include<stdio.h>
#include<stdlib.h>
struct link
{
	int info;
	struct list *next;
	
};
typedef struct link node;
void create(node *);
void print(node *);
void main()
{
	node *head;
	head=(node*)malloc(sizeof(node));
	create(head);
	print(head);
}
void create(node *list)
{
	int itm;
	node *loc;
	printf("ENter info:press -1 to termnate list\n");
	while(1)
	{
		printf("\ninfo\n");
		scanf("%d",&itm);
		if(itm==-1)
		break;
		loc=list;
		list->info=itm;
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
