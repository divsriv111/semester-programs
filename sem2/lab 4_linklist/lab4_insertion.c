#include<stdio.h>
#include<stdlib.h>
struct list
{
	int info;
	struct list *next;
};
typedef struct list node;
void create(node *list);
void print(node *list);
void main()
{
	int n,key;
	char ch;
	node *head;
	head=(node*)malloc(sizeof(node));
	create(head);
	print(head);
	printf("\nEnter element to be inserted\n");
	scanf("%d",&n);
	printf("choose where to insert\na) begning\nb) specific location\nc) End\n");
	scanf(" %c",&ch);
	if(ch=='b')
	printf("Enter key?\n ");
	scanf("%d",&key);
	
	switch(ch)
	{
		case 'a':
		{
			node *node1;
			node1=(node*)malloc(sizeof(node));
			node1->info=n;
			node1->next=head;
			head=node1;
			print(head);
			break;
		}
		case 'b':
		{
			node *node1,*loc;
			node1=(node*)malloc(sizeof(node));
			loc=head;
			node1->info=n;
			while(loc!=NULL)
			{
				if(loc->info==key)
				{
					loc->next=node1;
					node1->next=loc->next;
					break;
				}
				else
				loc=loc->next;
			}
			print(head);
			break;	
		}
			
		case 'c':
		{
			node *node1,*loc;
			node1=(node*)malloc(sizeof(node));
			loc=head;
			while(loc!=NULL)
			loc=loc->next;
			node1->info=n;
			node1->next=NULL;
			loc->next=node1;
			break;
		}
		default:
		{
		printf("Invalid entry\n");
		break;}
	}
	
}
void create(node *list)
{
	int itm;
	node *loc;
	printf("Enter info:press -1 to terminate list\n");
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
	list=list->next;}
}
