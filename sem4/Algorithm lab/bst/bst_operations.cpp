#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
struct BST{
	int info;
	struct BST *l;
	struct BST *r;
}*root=NULL,*temp=NULL;
typedef BST node;

void search(node *temp,int data)
{
	if((temp->info>data) && (temp->l!=NULL))
	search(temp->l,data);
	else if((temp->info>data) && (temp->l==NULL))
	{
		temp->l=(node*)malloc(1*sizeof(node));
		temp->l->info=data;
		temp->l->l=NULL;
		temp->l->r=NULL;
		cout<<"\nNode is inserted to left.\n";
	}
	else if((temp->info<data) && (temp->r!=NULL))
	search(temp->r,data);
	else if((temp->info<data) && (temp->r==NULL))
	{
		temp->r=(node*)malloc(1*sizeof(node));
		temp->r->info=data;
		temp->r->l=NULL;
		temp->r->r=NULL;
		cout<<"\nNode is inserted to right.\n";
	}
	else if(temp->info==data)
	cout<<"\nElement already in the tree\n";
}
void insert()
{
	int data;
	cout<<"\nEnter data to be inserted\n";
	cin>>data;
	if(root==NULL)
	{
		temp=(node*)malloc(1*sizeof(node));
		temp->info=data;
		temp->l=NULL;
		temp->r=NULL;
		root=temp;
		cout<<"\nNode is created!\n";
	}
	else
	{
		search(root,data);
	}
}
/*void delete()
{
	int data;
	cout<<"\nInsert data to be deleted\n";
	cin>>data;
	
}*/
void inorder(node *t)
{
	if(root==NULL)
	{
		cout<<"Tree is empty!\n";
		return;
	}
	if(t->l!=NULL)
	inorder(t->l);
	cout<<t->info<<"-> ";
	if(t->r!=NULL)
	inorder(t->r);
}
void preorder(node *t)
{
	if(root==NULL)
	{
		cout<<"Tree is empty!\n";
		return;
	}
	cout<<t->info<<"-> ";
	if(t->l!=NULL)
	inorder(t->l);
	if(t->r!=NULL)
	inorder(t->r);
}
void postorder(node *t)
{
	if(root==NULL)
	{
		cout<<"Tree is empty!\n";
		return;
	}
	if(t->l!=NULL)
	inorder(t->l);
	if(t->r!=NULL)
	inorder(t->r);
	cout<<t->info<<"-> ";
}
int main()
{
	int choice;
	while(1)
	{
	cout<<"Enter your choice\n1)insert\n2)delete\n3)in-order\n4)pre-order\n5)post-order\n6)exit\n";
	cin>>choice;
	switch(choice){
		case 1:
			insert();
			break;
		case 2:
			//delete();
			break;
		case 3:
			inorder(root);
			break;
		case 4:
			preorder(root);
			break;
		case 5:
			postorder(root);
			break;
		case 6:
			return 0;
		default:
			cout<<"Invalid choice!\n";
			break; 
	}
	}
	getch();
	return 0;
}
