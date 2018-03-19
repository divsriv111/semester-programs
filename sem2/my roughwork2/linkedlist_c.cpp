#include<stdio.h>
int info[10],link[10];
void create(int);
int getnode(void);
void print(int);
int main()
{
	int head,item;
	printf("Enter node from 0 to 9\n");
	scanf("%d",&head);
	create(head);
	printf("Linked list :\n");
	print(head);
	return 1;
}
void create(int head)
{
	int ptr,loc,item;
	loc=ptr=head;
	printf("Enter info: -1 to terminate list\n");
	while(ptr!=-1)
	{
		printf("info:\n");
		scanf("%d",&item);
		if(item==-1)
		break;
		loc=ptr;
		info[ptr]=item;
		link[ptr]=getnode();
		ptr=link[ptr];
		
	}
	
}
int getnode()
{
	int ptr;
	for(ptr=0;ptr<10;ptr++)
	{
		if(info[ptr]==0)
		return ptr;
	}
	return -1;
}
void print(int head)
{
	int ptr;
	ptr=head;
	while(ptr!=-1)
	{
	printf(" %d-> ",info[ptr]);
	ptr=link[ptr];
	}
	printf("-1\n");
}
