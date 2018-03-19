#include<stdio.h>
#include<stdlib.h>
#define size 111
struct queue
{
	int data[size];
	int front;
	int rear;
}q;
void cr()
{
	int c;
	printf("enter -99 to end");
	
	while(1)
	{
		printf("\n enter data :");
		scanf("%d",&c);
		if(c==-99)
		break;
		if((q.rear==size-1)&&(q.front!=0))
			{q.rear=-1;	
			}
	if(q.rear!=q.front-1)
	q.data[++q.rear]=c;
		}
		

}
void emp_full()
{
	if(q.rear==-1 && q.front==-1)
		printf("\ncircular queue empty\n");
	else if(q.rear==q.front-1 || (q.front==0 && q.rear==size-1))
		printf("\ncircular queue full\n");
	else
		printf("\n niether empty nor full\n ");
}
void dl()
{
	int i=q.front,j=q.rear;
	printf("\n circular queue is ;\n ");
	while(i!=j)
{
	if(i==size-1)
	{i=-1;
		}
	else 
		printf(" %d ",q.data[++i]);
}
}
void main()
{
	q.front=-1;
	q.rear=-1;
	cr();
	emp_full();
	dl();
	
	getch();
	return 0;
}
