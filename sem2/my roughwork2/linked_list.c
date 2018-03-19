#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct link
{
	int n;
	char c[15];
	struct link *next;
	
};
typedef struct link node;
void main()
{
	node *node1,*node2;
	node1=(node*)malloc(sizeof(node));
	node1->n=2;
	strcpy(node1->c,"Serena");
	
	node2=(node*)malloc(sizeof(node));
	node2->n=66;
	strcpy(node2->c,"LAndeshvar");
	
	node1->next=node2;
	printf("%d %s ",node1->n,node1->c);
	printf("%d %s ",node2->n,node2->c);
	printf("%d %s ",node1->next->n,node1->next->c);
}
