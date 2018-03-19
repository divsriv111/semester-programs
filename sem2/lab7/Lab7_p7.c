#include<stdio.h>
#include<stdlib.h>
#define MAX 10
struct node
{
	int a[MAX];
	int f;
	int r;
}queue;
void add_rear()
{
          int no;
          printf("\n Enter value to insert : ");
          scanf("%d",&no);
          if(queue.r==MAX)
          {
                   printf("\n  Overflow");
                   return;
          }
          else
          {
             queue.r++;
        	queue.a[queue.r]=no;
        	if(queue.r==0)
                        queue.r=1;
            if(queue.f==0)
                    	queue.f=1;
          }
}
void add_front()
{
          int no;
          printf("\n Enter val to insert::");
          scanf("%d",&no);
          if(queue.f<=1)
          {
                   printf("\n Cannot add value at queue.f end");
                   return;
          }
          else
            {
                queue.f--;
                queue.a[queue.f]=no;
            }

}
void delete_front()
{
          int no;
          if(queue.f==0)
          {
                   printf("\n  Underflow\n");
                   return;
          }
          else
          {
                   no=queue.a[queue.f];
                   printf("\n Deleted element is %d\n",no);
                   if(queue.f==queue.r)
                   {
                             queue.f=0;
                             queue.r=0;
                   }
                   else
                   {
                             queue.f++;
                   }
          }
}
void delete_rear()
{
int no;
    if(queue.r==0)
    {
         printf("\n Cannot delete value at queue.r end\n");
         return;
    }
    else
      {
        no=queue.a[queue.r];
        if(queue.f==queue.r)
              {
                   queue.f=0;
                    queue.r=0;
                   }
            else
               {
                      queue.r--;
                      printf("\n Dltd element is %d\n",no);
                   }
          }
}
void display()
{
          int i;
          if(queue.f==0)
          {
                   printf("\n  Underflow\n");
                   return;
          }
          else
          {
                   printf("\n Output");
                   for(i=queue.f;i<=queue.r;i++)
                   {
                             printf("\n %d",queue.a[i]);
                   }
          }
}
int main()
{
          int ch;
          while(1)
          {
             printf("\n Enter choice::");
           
			printf("enter 1 to add at r ,\n2 to add at f,\n3 to delete at f,\n4 to delete at r");
			  scanf("%d",&ch);
			  if(ch==-1)
			break;
			if(ch==1)
			add_rear();
			else if(ch==2)
			add_front();
			else if(ch==3)
			delete_front();
			else if(ch==4)
			delete_rear();
			display();
          }
          getch();
          return (0);
}

