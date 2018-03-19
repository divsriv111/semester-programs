#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct student{
	char name[15];
	struct student *next;
};
typedef struct student node;
void delete(node *list)
{
	char key[15];
	node *temp;
	printf("\nEnter name to be deleted\n");
	gets(key);
	while(list!=NULL)
	{
		temp=list;
		if(key==list->name)
		list->next=list->next->next;
		list=list->next;
	}
	
}
void insert(node *head)
{
	
	printf("\nEnter name\n");
	scanf("%s",head->name);
	head->next=(node*)malloc(sizeof(node));
	head=head->next;
	head=NULL;
}
void print(node *list)
{
	while(list!=NULL)
	{
		printf("%s\n",list->name);
		list=list->next;
	}
}
int main()
{
	node *head,*temp;
	int ch;
	head=(node*)malloc(sizeof(node));
	while(1)
	{
		printf("Enter choice\n1)Insert name\n2)delete name\n3)Print names\n4)exit\n");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
				insert(head);
				break;
			case 2:
				delete(head);
				break;
			case 3:
				print(head);
				break;
			case 4:
				return 0;
				break;
			default:
				printf("\nInvalid entry!!");
				break;
		}
	}
	getch();
}
