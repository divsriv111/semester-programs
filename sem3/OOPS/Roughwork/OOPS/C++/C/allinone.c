#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct linkedlist{
 int info;
 struct linkedlist *next;
};
typedef struct linkedlist node;
void linkedlistfunc(void);
void stacksfunc(void);
void queuefunc(void);
char stack[MAX];
int top;

int queue[MAX];
int front,rear;

void push(char itm)
{
	if(top==MAX-1)
	{
	printf("\nStack is full:condition overflow");
	return;
	}
	top++;
	stack[top]=itm;
}
char pop(void)
{
	char temp;
	if(top==-1)
	{
		printf("\nStack is empty");
		return;
	}
	temp=stack[top];
	top--;
	return temp;
}
void printstack(void)
{
	int i;
	printf("\nstack is:\n");
	for(i=0;i<MAX;i++)
	printf("%c ",stack[i]);
}
void createll(node *list)
{
	int info;
	node *temp;
	temp=list;
	printf("\nEnter info:press -1 to teminate list\n");
	while(1)
	{
		printf("info?\n");
		scanf("%d",&info);
		if(info==-1)
		break;
		temp->info=info;
		temp->next=(node*)malloc(sizeof(node));
		temp=temp->next;
	}
	temp->next=NULL;
}
void printll(node *list)
{
	while(list->next!=NULL)
	{
		printf("%d ",list->info);
		list=list->next;
	}
	printf("NULL\n");
}
void deletell(node *list)
{
	int opt,key;
	node *temp=NULL,*loc;;
	temp=list;
	printf("\nENter key\n");
	scanf("%d",&key);
	if(list==NULL)
	printf("\nChutiya banate ho mc, link list H hi nhe !!!!");
	else{
	while(temp!=NULL)
	{
		if(temp->info==key)
		{
		loc=temp;
		break;
		}
		temp=temp->next;
	}}
	if(loc==NULL)
	printf("\nkey not found\n");
	else
	loc=loc->next->next;
}
void insertll(node *list)
{
	int itm;
	node *temp,*loc;
	temp=(node*)malloc(sizeof(node));
	loc=list;
	printf("\n Enter element to be inserted\n");
	scanf("%d",&itm);
	temp->info=itm;
	while(loc!=NULL)
	loc=loc->next;
	loc->next=temp;
	temp->next=NULL;
	return;
}
void linkedlistfunc(void)
{
	node *head;
	head=(node*)malloc(sizeof(node));
	head=NULL;
	int opt;
	printf("\n1) Create L.L\n2) Delete elements\n3) Insert 4) DIsplay");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1:
			createll(head);
			break;
		case 2:
			deletell(head);
			break;
		case 3:
			insertll(head);
			break;
		case 4:
			printll(head);
			break;
		default:
			printf("\n Invalid EntrY\n");
			break;
	}
 } 
 void stacksfunc(void)
 {
 	top=-1;
 	push('A');
 	push('B');
 	push('C');
 	push('D');
 	printf("\n poped item is %c",pop());
    printf("\n poped item is %c",pop());
 }
 void insertq(int itm)
 {
 	if(rear==MAX-1)
 	{
 		printf("\n Queue is full!!!!!!!!!");
 		return;
	 }
	 rear++;
	 queue[rear]=itm;
	 if(front==-1)
	 front=0;
	return;
 }
 int deleteq(void)
 {
 	int temp;
 	if(front==-1)
 	{
 		printf("\nqueue is empty!!!!!");
 		return;
	 }
	 temp=queue[front];
	 queue[front]=NULL;
	 if(front==rear)
	 front=rear=-1;
	 else front++;
	 return temp;
 }
 void printqueue(void)
 {
 	int i;
 	for(i=0;i<MAX;i++)
 	printf("%d ",queue[i]);
 }
 void queuefunc(void)
 {
 	front=rear=-1;
 	insertq(1);
 	insertq(2);
 	insertq(3);
 	insertq(4);
 	insertq(5);
 	printf("\nQueue is:\n");
 	printf("front=%d \t rear=%d\n",front,rear);
 	printqueue();
 	printf("\ndeleted element is %d",deleteq());
 	printf("\ndeleted element is %d",deleteq());
 	printf("\ndeleted element is %d",deleteq());
	printf("\nQueue is:\n");
	printf("front=%d \t rear=%d\n",front,rear);
	printqueue();
 }
void main()
{
	int opt;
	char ch;
	printf("ENTER YOUR CHOICE!!!!!!\n");
	do
	{
	printf("1) Linked LIst\n2) STacks\n3) Queue\n");
	scanf("%d",&opt);
	switch (opt)
	{
		case 1:
			linkedlistfunc();
			break;
			
		case 2:
			stacksfunc();
			break;
			
		case 3:
			queuefunc();
			break;
			
		default: printf("\nInvalid entry,GEt lost!! -.-");
	}
	printf("\n\n\n\n\nDo you wanna test more?? (y/n)\n");
	scanf(" %c",&ch);
	}while(ch!='n'&&ch!='N');
}
