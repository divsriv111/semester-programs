#include<stdio.h>
#define MAX 10
int q[MAX],front=0,rear=0;

void add_rear()
{
          int no;
          printf("\n Enter value to insert : ");
          scanf("%d",&no);
          if(rear==MAX)
          {
                   printf("\n  Overflow");
                   return;
          }
          else
          {
                   rear++;
                   q[rear]=no;
                   if(rear==0)
                        rear=1;
                    if(front==0)
                    	front=1;
          }
}
void add_front()
{
          int no;
          printf("\n Enter val to insert::");
          scanf("%d",&no);
          if(front<=1)
          {
                   printf("\n Cannot add value at front end");
                   return;
          }
          else
            {
                front--;
                q[front]=no;
            }

          }

void delete_front()
{
          int no;
          if(front==0)
          {
                   printf("\n  Underflow\n");
                   return;
          }
          else
          {
                   no=q[front];
                   printf("\n Deleted element is %d\n",no);
                   if(front==rear)
                   {
                             front=0;
                             rear=0;
                   }
                   else
                   {
                             front++;
                   }
          }
}

void delete_rear()
{
int no;
    if(rear==0)
    {
                   printf("\n Cannot delete value at rear end\n");
                   return;
    }
    else
          {
            no=q[rear];
             if(front==rear)
              {
                           front=0;
                             rear=0;
                   }
            else
               {
                      rear--;
                      printf("\n Dltd element is %d\n",no);
                   }
          }
}

void display()
{
          int i;
          if(front==0)
          {
                   printf("\n  Underflow\n");
                   return;
          }
          else
          {
                   printf("\n Output");
                   for(i=front;i<=rear;i++)
                   {
                             printf("\n %d",q[i]);
                   }
          }
}

int main()
{
          int ch;
          while(1)
          {
             printf("\n Enter choice::");
             scanf("%d",&ch);
			printf("enter choice");
			if(ch==-1)
			break;
			printf("enter 1 to add at rear ,2 to add at front,3 to delete to front,4 to delete at rear");
			if(ch==1)
			add_rear();
			else if(ch==2)
			add_front();
			else if(ch==3)
			delete_front();
			else if(ch==4)
			delete_last();
			display();
          }
          getch();
          return (0);
}

