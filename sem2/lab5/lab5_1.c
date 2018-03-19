#include<stdio.h>
#include<stdlib.h>
struct doubly{
	int info;
	struct doubly *prev;
	struct doubly *next;
};
typedef struct doubly node;
node *head,*last;
void main()
{
	head=(node*)malloc(sizeof(node));
	last=head;
	head->next=head->prev=NULL;
	head->info=50;
	printf("%d",head->info);
}
