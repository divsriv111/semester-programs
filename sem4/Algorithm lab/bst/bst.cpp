#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
struct node{
	struct node *left;
	int info;
	struct node *right;
}*root;
class BST{
	public:
	BST()
	{
		root=new node;
		root->info=NULL;
		root->left=NULL;
		root->right=NULL;
	}
	void insert(node *head,int key)
	{
		if(head->info==key)
		{
			cout<<"\nKey is already in tree\n";
			return;
		}
		if(head->left==NULL && head->right==NULL && head->info==NULL)
		{
			head->info=key;
			head->left=NULL;
			head->right=NULL;
			cout<<"\nNode is added\n";
			return;
		}
		if(key < head->info )
		{
			if(head->left!=NULL)
			insert(head->left,key);
			else
			{
				head->left=new node;
				(head->left)->info=key;
				(head->left)->left=NULL;
				(head->left)->right=NULL;
				cout<<"Node Added To Left"<<endl;
				return;
			}
		
		}
		if(key > head->info )
		{
			if(head->right!=NULL)
			insert(head->right,key);
			else
			{
			head->right=new node;
			(head->right)->info=key;
			(head->right)->left=NULL;
			(head->right)->right=NULL;
			cout<<"Node Added To Right"<<endl;
			return;
			}
		}
	}
	node *search(node *head,int key)
	{
		if(head->info==key)
		return head;
		
		if(key < head->info && head->left!=NULL)
		search(head->left,key);
		
		if(key > head->info && head->right!=NULL)
		search(head->right,key);
		
		//if(head->left==NULL && head->right==NULL && head->info!=key)
		//cout<<"\nKey not found!";
		return NULL;
	}
	/*int *delete(node **head,int key)
	{
		
	}
	void print(node **head)
	{
		while()
	}*/
};
int main()
{
	int ch,key;
	node *temp=new node;
	BST bst;
	while(1)
	{
		cout<<"Enter your choice\n1)insert \n2)search\n3)delete\n4)print\n5)exit?\n";
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"\nEnter key to be inserted ";
				cin>>key;
				bst.insert(root,key);
				break;
			case 2:
				cout<<"\nEnter key to be searched ";
				cin>>key;
				temp=bst.search(root,key);
				if(temp!=NULL)
				cout<<"key is found at location "<<temp;
				else
				cout<<"key not found!\n";
				break;
			/*case 3:
				cout<<"\nEnter key to be deleted ";
				cin>>key;
				temp=bst.delete(root,key);
				if(temp!=NULL)
				cout<<"key deleted ";
				else
				cout<<"key not found.\n"
				break;
			case 4:
				bst.print(root);
				break;*/
			case 5:
				return 0;
			default:
				cout<<"\nInvalid choice!!";
				break;
		}
	}
	getch();
	return 0;
}
