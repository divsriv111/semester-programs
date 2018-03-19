#include<stdio.h>
#include<stdlib.h>
struct doubly{
	int info;
	struct doubly *prev;
	struct doubly *next;
};
typedef struct doubly node;
node *head,*last;
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
node *insert(node *list,int item,int key)
{
	node *loc,*new;
	new=(node*)malloc(sizeof(node));
	new->info=item;
	if(key==0)
	{
	new->next=head;
	head->next->prev=new;
	head=new;
	head->prev=NULL;
	}
	else
	{
		loc=location(list,key);
		if(loc==NULL)
		{
		printf("\nKey not found!!");
		return NULL;}
		else
		{
		new->next=loc->next;
		new->prev=loc;
		loc->next->prev=new;
		if(new->next==NULL)
		last=new;
		else loc->next=new;
		
		}
	}
	return head;
}
void main()
{
	int key,item;
	head=(node*)malloc(sizeof(node));
	last=head;
	head->next=head->prev=NULL;
	create(head);
	print(head);
	printf("\nEnter element to be inserted");
	scanf("%d",&item);
	printf("\nEnter location (0 for begning)");
	scanf("%d",&key);
	
	print(insert(head,item,key));
}
