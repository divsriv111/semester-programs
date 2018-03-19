#include <stdio.h>
#include <stdlib.h>
#define size 101
struct queue
{
	int a[size];
    int f,r;
}q;

 void insert(int data)
{
	int i,j;
    if (q.r >= size - 1)
    {
        printf("\nQueue overflow");
        return;
    }
    if ((q.f == -1) && (q.r == -1))
    {
        q.f++;
        q.r++;
        q.a[q.r] = data;
        return;
    }    
		if(data<q.a[q.r])
		{
  q.r=q.r+1; 
		for (i = 0; i <=q.r-1; i++)
    { 
		if(data<q.a[i])
		{
			for(j=q.r;j>i;j--)
			q.a[j]=q.a[j-1];
			q.a[i]=data;
			return;
			}
		
		}}
else if(data>=q.a[q.r])
    q.a[++q.r] = data;
     

}
void delete(int data)
{
    int i;
 
    if ((q.f==-1) && (q.r==-1))
    {
        printf("\nQueue empty");
        return;
    }
 
    for (i = 0; i <= q.r; i++)
    {
        if (data == q.a[i])
        {
            for (; i < q.r; i++)
            {
                q.a[i] = q.a[i + 1];
            }
 
        q.a[i] = -99;
        q.r--;
 
        if (q.r == -1) 
            q.f = -1;
        return;
        }
    }
    printf("\n%d not found in queue to delete", data);
}
void display()
{
	printf("\n Queue is :\n");
    if ((q.f == -1) && (q.r == -1))
    {
        printf("\nQueue is empty");
        return;
    }
 
    for (; q.f <= q.r; q.f++)
    {
        printf(" %d ", q.a[q.f]);
    }
 
    q.f = 0;
}

 
void main()
{
    int n, ch;
     q.f = q.r = -1;
    printf("\nenter 1 to insert \n 2 to delete\n-1 to exit");
 
    while (1)
    {
        printf("\nchoice : ");    
        scanf("%d", &ch);
 
     if(ch==1)
     {
            printf("\nEnter value to be inserted : ");
            scanf("%d",&n);
            insert(n);
      } 
    else if(ch==2)
            {printf("\nEnter value to delete : ");
            scanf("%d",&n);
            delete(n);
            }
	else
	break;
	display();
        }
    }

