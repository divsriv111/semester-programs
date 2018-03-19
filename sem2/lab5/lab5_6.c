#include<stdio.h>
#include<stdlib.h>
struct cirlist{
	int info;
	struct cirlist *next;
};
typedef struct cirlist node;
int y;
node *head;
node *create(node *head)
{
	int item;
	node *list;
	list=head;
	printf("Enter elements:press -1 to terminate\n");
	while(1)
	{
		printf("\ninfo?");
		scanf("%d",&item);
		if(item==-1)
		break;
		y++;
		list->info=item;
		list->next=(node*)malloc(sizeof(node));
		list=list->next;
	}
	list->next=head;
	return head;
}
void print(node *list)
{
	while(list->next!=head)
	{
		printf(" %d",list->info);
		list=list->next;
	}
}
void main()
{
	head=(node*)malloc(sizeof(node));
	head=create(head);
	print(head);
	printf("\nNumber of nodes=%d",y);
}
