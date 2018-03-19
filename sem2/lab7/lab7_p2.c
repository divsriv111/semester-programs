#include<stdio.h>
#include<stdlib.h>
#define size 10
struct queue
{
	int d[size];
	int front;
	int rear;
}q;
void fe()
{
	if(q.front==0 && q.rear==size-1)
	printf("queue full");
	else if(q.front==-1 && q.rear==-1)
	printf("queue empty");
	else
	printf("niether empty nor full");
}
void main()
{
	int k;
	q.front=-1;
	q.rear=-1;
	printf("enter -99 to end \n enter linear queue \n");
	printf("\n enter elements");
	while(1)
	{
		scanf("%d",&k);
		if(k==-99)
		break;
		if(q.rear==size-1)
		{
			printf("queue overflow\n");
			break;
			}
		if(q.rear==-1)
		q.front++;
		q.d[++q.rear]=k;
		
	}
	
	fe();
	getch();
}
