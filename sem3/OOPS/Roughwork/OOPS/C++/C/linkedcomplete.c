#include<stdio.h>
#include<stdlib.h>
struct linkedlist{
	int info;
	struct linkedlist *next;
};
typedef struct linkedlist node;
void display(node *list)
{
	while(list!=NULL)
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
void create(node *list)
{
	int itm;
	node *loc;
	printf("\nEnter the elements:press -1 to terminate list");
	while(1)
	{
		printf("\ninfo?");
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
node *insert(node *list)
{
	int itm,key;
	node *new,*loc;
	printf("\nEnter element to be inserted");
	scanf("%d",&itm);
	printf("\nInsertion after?: Enter 0 for begning");
	scanf("%d",&key);
	if(key==0)
	{
		new=(node*)malloc(sizeof(node));
		new->info=itm;
		new->next=list;
		list=new;
		
	}
	else
	{
		loc=location(list,key);
		if(loc==NULL)
		{printf("\nKey not found");
		return NULL;}
		else{
		new=(node*)malloc(sizeof(node));
		new->info=itm;
		new->next=loc->next;
		loc->next=new;
		}
		
	}
	return list;
}
node *delete(node *list)
{
	int key;
	node *temp,*loc;
	printf("\nEnter key to be deleted");
	scanf("%d",&key);
	if(list->info==key)
	{
		temp=list->next;
		free(list);
		list=temp;
	}
	else
	{
		loc=location(list,key);
		if(loc==NULL)
		{
			printf("\nkey not found");
		}
		else
		{
			temp=loc->next->next;
			free(loc->next);
			loc->next=temp;
		}	
	}
	return(list);
}

void main()
{
	node *head;
	head=(node*)malloc(sizeof(node));
	create(head);
	display(head);
	head=insert(head);
	display(head);
	head=delete(head);
	display(head);
}
