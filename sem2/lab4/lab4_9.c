#include<stdio.h>
#include<stdlib.h>
struct list
{
	int info;
	struct list *next;
};
typedef struct list node;
node *head1,*head2;
void create(node *list);
void print(node *list);
node *copy(node *list1,node *list2);
void main()
{
	node *head;
	head=(node*)malloc(sizeof(node));
	create(head);
	head2=(node*)malloc(sizeof(node));
	head2=copy(head,head2);
	print(head2);
}
void create(node *list)
{
	int item;
	node *loc;
	printf("Enter info:press -1 to terminate list\n");
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
	if(list==NULL)
	printf("\nEmpty linked_list\n");
	else
	while(list!=NULL)
	{
		printf(" %d->",list->info);
		list=list->next;
	}
	printf("NULL\n");
}
node *copy(node *list1,node *list2)
{
	node *loc=list2;
	while(list1!=NULL)
	{
		list2->info=list1->info;
		list2->next=(node*)malloc(sizeof(node));
		list2=list2->next;
		list1=list1->next;
	}
	list2->next=NULL;
	return loc;
}
