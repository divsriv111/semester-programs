#include<stdio.h>
#include<stdlib.h>
#define size 22
struct queue
{
	int data[size];
	int front;
	int rear;
}q;
void create()
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
			{q.rear=0;
		q.data[q.rear]=c;		
	}
	else if(q.rear!=q.front-1)
	q.data[++q.rear]=c;
		}
		

}
void display()
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
	create();
	display();
	getch();
	return 0;
}
