#include<stdio.h>
#include<stdlib.h>
#define size 101
struct deque
{ 
	int d[size];
	int front;
	int rear;
}q;
void enqueue(int k)
{
 if (((q.front == 0) && (q.rear == size-1)) || (q.rear == q.front - 1))
  {  printf("\noverflow");
  return;
   } 
 else if (q.front == -1) 
      q.front = q.rear = 0;
 else if (q.rear == size-1) 
       q.rear = 0;
 else
       q.rear = q.rear +1;

 q.d[q.rear]=k;   
}
void dequeue()
{
	int k;
 if(q.front == -1)
 {  printf("\n underflow");
   return;
}
 k = q.d[q.front];    
 if(q.front == q.rear) 
     q.front = q.rear = -1;
 else if (q.front == size-1)
     q.front = 0;
 else
      q.front = q.front + 1;
}
void display()
{
    int i,j;
    if(q.front==0 && q.rear==-1)
    {
        printf("Queue is underflow\n");
            return;
    }
    if(q.front>q.rear)
    {
        for(i=0;i<=q.rear;i++)
            printf("%d ",q.d[i]);
        for(j=q.front;j<=size-1;j++)
            printf("%d ",q.d[j]);
    }
    else
    {
        for(i=q.front;i<=q.rear;i++)
        {
            printf("%d ",q.d[i]);
        }
    }
    printf("\n");
}
void main()
{int ch;int k;
	q.front=q.rear=-1;
	printf("\n enter choice :\n1 to enqueue \n2 to dequeue enter -99 to end\n");
	while(1)
	{printf("\nenter choice :");
	scanf("%d",&ch);
	if(ch==-99)
	break;
	if(ch==1)
{printf("enter number to be inserted :");scanf("%d",&k);
	enqueue(k);
	}else if(ch==2)
	dequeue();
	display();
}
}
