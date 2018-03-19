#include<stdio.h>
#include<stdlib.h>
struct list{
	int info;
	struct list *next;
};
typedef struct list node;
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
	while(list->next!=NULL)
	{
		printf("%d->",list->info);
		list=list->next;
	}
	printf("NULL\n");
	printf("\n\n");
}
void merge(node *list1,node *list2)
{
	node *list,*loc;
	int y=2;
	list=(node*)malloc(sizeof(node));
	loc=list;
	while(list1!=NULL&&list2!=NULL)
	{
		y++;
		if((y%2)!=0)
		{
			list->info=list1->info;
			list1=list1->next;
		}
		else
		{
			list->info=list2->info;
			list2=list2->next;
		}
		list->next=(node*)malloc(sizeof(node));
		list=list->next;
		
	}
	
	if(list1!=NULL&&list2==NULL)
	{
		while(list1!=NULL)
		{
			list->info=list1->info;
			list->next=(node*)malloc(sizeof(node));
			list=list->next;
			list1=list1->next;
		}
	}
	if(list2!=NULL&&list1==NULL)
	{
		while(list2!=NULL)
		{
			list->info=list2->info;
			list->next=(node*)malloc(sizeof(node));
			list=list->next;
			list2=list2->next;
		}
	}
	list->next=NULL;
	print(loc);
}
void main()
{
	
	node *head1,*head2;
	head1=(node*)malloc(sizeof(node));
	head2=(node*)malloc(sizeof(node));
	printf("\tFor linked list 1:\n");
	create(head1);
	print(head1);
	printf("\tFor linked list 2:\n");
	create(head2);
	print(head2);
	merge(head1,head2);
}

