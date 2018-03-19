#include<stdio.h>
#include<stdlib.h>
struct node
{
	int k;
	struct node *next;
}*r=NULL,*f=NULL;
void create()
{

	struct node *t;int ch;
	printf("enter -1 to end\n");
	while(1)
	{
		printf("\n Enter info : ");
		scanf("%d",&ch);
		if(ch==-1)
		break;
		if (r == NULL)
    {
        r = (struct node *)malloc(1*sizeof(struct node));
		r->next = NULL;
        r->k = ch;
        f = r;
    }
    else
    {
        t=(struct node *)malloc(1*sizeof(struct node));
        r->next = t;
        t->k = ch;
        t->next = NULL;
 
        r = t;
    }
}		
}
void tick()
{
	if(f==NULL)
	printf("empty queue\n");
	else 
	printf("not empty\n");	
}
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
void main()
{
	create();
	tick();
	display();
	getch();
	return 0;
}
