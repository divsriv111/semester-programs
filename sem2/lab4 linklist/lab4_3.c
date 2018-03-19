#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
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
	node *head;
	int key,itm;
	char ch;
	head=(node*)malloc(sizeof(node));
	create(head);
	print(head);
	printf("Enter item\n");
	scanf("%d",&itm);
	printf("position of insertion?\na) Begning\nb)specific\nc)End?\n");
	scanf(" %c",&ch);
	if(ch=='b')
	printf("Enter key\n");
	scanf("%d",&key);
	switch(ch)
	{
		case 'a':
		struct list *node1;
		node1=(node*)malloc(sizeof(node));
		node1->info=itm;
		node1->next=head;
		head=node1;
		print(head);
		break;	
		
		case 'b':
		struct list *node2,*loc1;
		node2=(node*)malloc(sizeof(node));
		loc1=head;
		while(loc1!=NULL)
		{if(loc1->info==key)
		break;
		loc1=loc1->next;}
		if(loc1==NULL)
		{printf("\nKey not found!\n");
		exit(1);}
		else
		{node2->info=itm;
		node2->next=loc1->next;
		loc1=node2;
		print(head);}
		break;
		
		case 'c':
		struct list *node3,*loc2;
		node3=(node*)malloc(sizeof(node));
		loc2=head;
		while(loc2!=NULL)
		loc2=loc2->next;
		node3->info=itm;
		node3->next=NULL;
		loc2->next=node3;
		print(head);
		break;
		
		default:
		printf("\nInvalid entry\n");		
	}
	
	getch();
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
	while(list!=NULL)
	{
		printf("%d ",list->info);
		list=list->next;
	}
}
