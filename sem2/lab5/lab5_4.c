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
node *location(node *list,int key)
{
	while(list!=NULL)
	{
		if(list->info==key)
		return list;
		list=list->next;
	}
	return NULL;
}
node *delete(node *list)
{
	node *temp,*loc;
	int key;
	if(head->next==NULL)
	return(head);
	printf("\nEnter element to be deleted");
	scanf("%d",&key);
	if(head->info==key)
	{
		temp=head->next;
		free(head);
		head=temp;
		head->prev=NULL;
	}
	else{
		loc=location(list,key);
		if(loc==NULL)
		printf("\nKey not found");
		else
		{
		temp=loc->next->next;
		free(loc->next);
		if(temp!=NULL)
		temp->prev=loc;
		if(temp->next==NULL)
		last=loc;
		}
	}
	return list;
}
void main()
{
	head=(node*)malloc(sizeof(node));
	last=head;
	head->next=head->prev=NULL;
	create(head);
	print(head);
	print(delete(head));
}
