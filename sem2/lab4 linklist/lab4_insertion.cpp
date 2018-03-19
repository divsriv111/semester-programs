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
	int n;
	char ch;
	node *head;
	head=(node*)malloc(sizeof(node));
	create(head);
	print(head);
	printf("\nEnter element to be inserted\n");
	scanf("%d",&n);
	printf("choose where to insert\na) begning\nb) specific location\nc) End\n");
	getchar(ch);
	
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
			
		}
	}
	
}
void create(node *list)
{
	int itm;
	node *loc;
	printtf("Enter info:press -1 to terminate list\n");
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
	while(list!=NUll)
	printf("%d ",list->info);
	list=list->next;
}
