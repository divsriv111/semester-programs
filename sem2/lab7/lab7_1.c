#include<stdio.h>
#define MAX 5
char queue[MAX];
int front;rear;
void insert(char itm)
{
	if(rear>=MAX-1)
	{
		printf("queue overflow!!!!!!!!!!!!\n");
		return ;	
	}
	rear++;
	queue[rear]=itm;
	if(front==-1)
	front=0;
}
char delete(void)
{
	char itm;
	if(empty())
	{
		printf("Queue is empty!!!!!!!!!\n");
		return NULL;
	}
	itm=queue[front];
	queue[front]=NULL;
	front++;
	if(front==rear)
	front=rear=-1;
	return itm;
}
int empty(void)
{
	if(front==-1)
	return 1;
	else return 0;
}
void print(void)
{
	int i;
	printf("front=%d\trear=%d\n",front,rear);
	for(i=0;i<MAX;i++)
	{
		printf(" %c",queue[i]);
	}
}
void main()
{
	char item;
	front=rear=-1;
	insert('A');
	insert('B');
	insert('C');
	insert('D');
	insert('E');
	print();
	item=delete();
	printf("\nDeleted item is %c and queue is:\n",item);
	print();
	item=delete();
	printf("\nDeleted item is %c and queue is:\n",item);
	print();
	item=delete();
	printf("\nDeleted item is %c and queue is:\n",item);
	print();

}
