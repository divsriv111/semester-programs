#include<stdio.h>
#include<stdlib.h>
struct list
{
	int info;
	struct list *next;
};
typedef struct list node;
int x,y;
node *head1,*head2;
void create(node *list);
void print(node *list);
int nnode(node *list,int o);
void main()
{
	head1=(node*)malloc(sizeof(node));
	printf("\tFor linked list 2:\n");
	create(head1);
	print(head1);
	head2=(node*)malloc(sizeof(node));
	printf("\tFor linked list 2:\n");
	create(head2);
	print(head2);
	x=nnode(head1,x);
	y=nnode(head2,y);
	printf("\nNumber of node of linked list 1= %d",x-1);
	printf("\nNumber of node of linked list 2= %d",y-1);
	if(x==y)
	printf("\nSame number of nodes");
	else printf("\nNumber of nodes are not same");
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
		printf("%d->",list->info);
		list=list->next;
	}
	printf("NULL\n");
}
int nnode(node *list,int o)
{
	node *head=list;
	o++;
	if(head==NULL)
	return o;
	else return(nnode((head->next),o));
}
