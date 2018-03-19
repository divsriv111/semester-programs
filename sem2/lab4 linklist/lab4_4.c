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
	node *head,*temp;
	int key;
	char ch;
	head=(node*)malloc(sizeof(node));
	
	create(head);
	print(head);
	
	printf("position of deletion?\na) Begning\nb)specific\nc)End?\n");
	scanf(" %c",&ch);
	if(ch=='b')
	printf("Enter key\n");
	scanf("%d",&key);
	switch(ch)
	{
		case 'a':
		temp->next=head->next;
		head=temp;
		print(head);
		break;	
		
		case 'b':
		node *loc1,*temp;
		temp=(node*)malloc(sizeof(node));
		loc1=head;
		while(loc1!=NULL)
		{if(loc1->info==key)
		break;
		loc1=loc1->next;}
		if(loc1==NULL)
		{printf("\nItem not found!\n");}
		else
		{temp->next=loc1->next->next;
		loc1->next=temp;
		free(temp);
		print(head);}
		break;
		
		case 'c':
		node *loc2,*loc3;
		loc2=head;
		while(loc2<NULL)
		{	loc3=loc2;
			loc2=loc2->next;
		}
		loc3->next=NULL;
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
