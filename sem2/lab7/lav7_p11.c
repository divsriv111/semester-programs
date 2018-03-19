#include<stdio.h>
#include<stdlib.h>
struct node
{
	int k;
	struct node *next;
}*r=NULL,*f=NULL;
void display()
{
	struct node *go;
	go=f;
	while(go!=NULL)
	{
		printf("%d    ",go->k);
		go=go->next;
		}
}
void enq(int data)
{
	struct node *awe;
    if (r == NULL)
    {
        r = (struct node *)malloc(sizeof(struct node));
        r->next = NULL;
        r->k = data;
        f = r;
    }
    else
    {
        awe=(struct node *)malloc(1*sizeof(struct node));
        r->next = awe;
        awe->k = data;
        awe->next = NULL;
 
        r = awe;
}
}
void deq()
{
    struct node *f1;
	f1 = f;
 
    if (f1 == NULL)
    {
        printf("\n underflow of queue");
        return;
    }
    else
        if (f1->next != NULL)
        {
            f1 = f1->next;
            printf("\n Dequed val : %d\n", f->k);
            free(f);
            f = f1;
        }
        else
        {
            printf("\n Dequed val : %d\n", f->k);
            free(f);
            f = NULL;
            r = NULL;
        }

}
void main()
{
	int o,ch;
	while(1)
	{
	printf("\nenter -99 to end\nenter 1 to enqueue\nenter 2 to dequeue\n" );
	scanf("%d",&ch);
	if(ch==-99)
	break;
	if(ch==1)
	{printf("enter data :");
	scanf("%d",&o);
	enq(o);
	}else if(ch==2)
	deq();
	display();}
	getch();
	return 0;
}
