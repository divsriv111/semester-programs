#include<stdio.h>
#include<stdlib.h>
struct list
{
	int info;
	char c[15];
	struct list *next;
};
typedef struct list node;
void main()
{
	node *node1,*node2;
	node1=(node*)malloc(sizeof(node));
	printf("Enter info and string for node1:\n");
	scanf("%d %s",&node1->info,node1->c);
	
	node2=(node*)malloc(sizeof(node));
	printf("Enter info and string for node2:\n");
	scanf("%d %s",&node2->info,node2->c);
	
	printf("\nnode1:%d\t%s",node1->info,node1->c);
	printf("\nnodes:%d\t%s",node2->info,node2->c);
	
	node1->next=node2;
	node2->next=NULL;
	
	printf("\nAfter appending:%d\t%s",node1->next->info,node1->next->c);
	
}
