#include<stdio.h>
#include<stdlib.h>
struct cirlist{
	int info;
	struct cirlist *next;
};
typedef struct cirlist node;
void main()
{
	node *head;
	head=(node*)malloc(sizeof(node));
	head->next=head;
	printf("Circular linked list created");
}
