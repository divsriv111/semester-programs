#include<stdio.h>
#include<stdlib.h>
struct list
{
	int info;
	struct list *next;
};
typedef struct list node;
void main()
{
	node *head;
	int key,l;
	head=(node*)malloc(sizeof(node));
	
	create(head);
	printf("\nYou have entered\n");
	printf(head);
	
	printf("\nEnter info to be inserted and location-enter 0 for insertion in begning \n");
	scanf("%d%d",&key,&l);
	insert(head,key,l);
	print(head);
}
void create(node *list)
{
	int item;
	node *loc;
	printf("\nEnter info:press -1 to terminate list\n");
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
node *binsert(node *list,int key,)
{
	node *loc;
	loc=findloc(list,key);
}
