#include<stdio.h>
#define MAX 5
char queue[MAX];
int front,rear;
void insert(char itm)
{
	if((rear==MAX-1&&front==0)||(front=(rear+1)))
	{
		printf("Queue overflow\n");
		return;
	}
	else if(rear==MAX-1)
	rear=0;
	else if(front==MAX-1)
	front=0;
	else
	{
		queue[rear]=itm;
		rear++;
	}
}
char delete(void)
{
	char itm;
	if(empty())
	{
		printf("queue is empty\n");
		return NULL;
	}
	itm=queue[front];
	queue[front]=NULL;
	front++;
	return itm;
	
}
int empty(void)
{
	if(front=rear=0)
	return 1;
	else return 0;
}
void print(void)
{
	int i;
	printf("\nfront=%d\trear=%d\n",front,rear);
	for(i=0;i<MAX;i++)
	{
		printf(" %c",queue[i]);
	}
}
void main()
{
	char item;
	front=rear=0;
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
	print();
	item=delete();
	item=delete();

}
