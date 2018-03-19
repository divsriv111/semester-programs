#include<stdio.h>
#include<string.h>
#include<conio.h>
struct student{
	char name[15];
};
typedef struct student node;
node a[10];
int l=0;
node *pa=&a[0];
void insert()
{
	printf("\nEnter the name\n");
	scanf("%s",pa->name);
	*pa++;
	l++;
}
void delete(){
	char key[15];
	int i,temp=99,j;
	printf("\nEnter Name to be deleted\n");
	scanf("%s",&key);
	for(i=0;i<l;i++)
	{
		if(strcmp(key,a[i].name))
		{
			temp=i;
			for(j=i;j<l;j++)
			strcpy(a[j].name,a[j+1].name);
		}
	}
	if(temp==99)
	{printf("\nname not found!\n");
	return;}
	print();
}
void print()
{
	int i;
	for(i=0;i<l;i++)
	printf("%s\n",a[i].name);
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n\nEnter the choice\n");
		printf("1)Insert name\n2)Delete name\n3)Print name\n4)Exit\n");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			case 3:
				print();
				break;
			case 4:
				return 0;
			default:
				printf("\nInavlid choice\n");
		}
	}
	getch();
}
