#include<stdio.h>
#include<stdlib.h>
#define size 101
struct queue
{
	int data[size];
	int front;
	int rear;
}q;
void enqueue(int k)
{
    int i;
    if (q.rear == size - 1)
    printf("Queue Overflow \n");
    else if(q.front==-1&& q.rear==-1)
    {
		q.front=0;
		q.rear=0;
		q.data[q.rear]=k;
		}
    else{
       q.rear = q.rear + 1;
        q.data[q.rear] = k;
    }
} 
void dequeue()
{
    if (q.front == - 1 || q.front > q.rear)
    {
        printf("Queue UnderfloW \n");
        return ;
    }
    else
    {
        printf("deleted element from queue : %d\n", q.data[q.front]);
        q.front = q.front + 1;
    }
}
void display()
{
	int i=q.front;
		printf("\nqueue is \n");
	while(i!=q.rear)
	printf("%d   ",q.data[i++]);
}
void main()
{
	int ch;int k;
	printf("enter choice 1 to enqueue ,2 to dequeue\n btw enter -99 to end\n");
	q.front=-1;q.rear=-1;
	while(1)
	{	printf("\n choice : ");
		scanf("%d",&ch);
		if(ch==-99)
		break;
	if(ch==1)
	{	printf("enter data to be entered :");
	scanf("%d",&k);
	enqueue(k);}
	else if(ch==2)
	dequeue();
	display();
}
}
