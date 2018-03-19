#include<stdio.h>
#include<stdlib.h>
#define size 101
struct queue
{
	int d[size];
	int front;
	int rear;
}q;
void main()
{
	int k;q.front=-1;q.rear=-1;
	printf("enter -99 to end \n enter linear queue \n");
	printf("\n enter elements");
	while(1)
	{
		scanf("%d",&k);
		if(k==-99)
		break;
		q.d[++q.rear]=k;
		
	}
	printf("\nLinear queue is \n");
	while(q.front!=q.rear)
	printf("front at %d is %d   ",q.front,q.d[++q.front]);
	getch();
}
