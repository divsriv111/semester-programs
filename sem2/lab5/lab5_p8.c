#include<stdio.h>
#include<stdlib.h>
struct node
{
	int coef;
	int pow;
	struct node *next;
}*head1=NULL,*head2=NULL;
struct node *create(struct node *head)
{
	printf("\nenter coefficient and power -1 to end\n");
	struct node *curr,*kk;
	while(1)
	{
		kk=(struct node *)malloc(sizeof(struct node));
		printf("\nenter coefficient and power of x");
		scanf("%d%d",&kk->coef,&kk->pow);
		if((kk->coef==-1)&&(kk->pow==-1))
		break;
		if(head==NULL)
		{
			head=curr=kk;			
			}
			else
			{
				curr->next=kk;
				curr=curr->next;		
					}
		}curr->next=NULL;
		return head;
}
void display(struct node *start)
{
struct node *new_node;

 new_node=start;
 while(new_node!=NULL)
   {
   printf("%dx^%d  +  ",new_node->coef,new_node->pow);
   new_node=new_node->next;
   }
  printf(" ");
}
void append(struct node *pol,int a,int b,struct node **head3)
{
	struct node *awe;
			
	awe=(struct node *)malloc(sizeof(struct node));
		awe->coef=a;
		awe->pow=b;
		awe->next=NULL;
				
	if(pol==NULL)
	{
		*head3=pol=awe;
		return;
		}
		pol=pol->next;
		
}
struct node *add(struct node *t1,struct node *t2,struct node *t3)
{

	struct node *head3=t3;
	int coeff,powe;

	while((t1!=NULL)&&(t2!=NULL))
	{
		
		if(t1->pow>t2->pow)
		{	coeff=t1->coef;
			powe=t1->pow;
			t1=t1->next;
		}
		else if(t2->pow>t1->pow)
		{
			coeff=t2->coef;
			powe=t2->pow;
			t2=t2->next;
			}
		else
		{
			coeff=t1->coef + t2->coef;
			powe=t1->pow;
			t1=t1->next;
			t2=t2->next;
			}

			if(coeff!=0)
			append(t3,coeff,powe,&head3);
		display(head3);
			}
	if(t1==NULL)
	while(t2!=NULL)
	{
		append(t3,t2->coef,t2->pow,&head3);
		t2=t2->next;
		}
	if(t2==NULL)
	while(t1!=NULL)
	{
		append(t3,t1->coef,t1->pow,&head3);
		t1=t1->next;
		}
		
		return head3;		
}

int main()
{
	struct node *head3=NULL;
	head1=create(head1);
	display(head1);
	printf("NULL");
	printf("\n");
	head2=create(head2);
	display(head2);
	printf("NULL");
	printf("\n");
	head3=add(head1,head2,head3);
	printf("NULL\n");
	getch();
}
