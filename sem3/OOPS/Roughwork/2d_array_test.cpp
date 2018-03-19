#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
class books{
	char book[5][10],book2[10],author2[10],author[5][5];
	int ncopy[5],cost[5],temp,noofcopy;
	public:
	books()
		{
		strcpy(book[0],"maths");
		//,{"english"},{"physics"},{"chemistry"},{"hindi"}};
	//	author[5][5]={{"A"},{"B"},{"C"},{"D"},{"E"}};
	//	ncopy[5]={3,3,3,3,3};
	cost[5]={10,20,30,40,50};
		}
	void get_data()
	{
		cout<<"Enter book name and author's name\n";
		cin>>book2>>author2;
		search(book2,author2);
	}
	void search(char book2[],char author2[])
	{
		temp=0;
		for(int i=0;i<5;i++)
		{
			if(!(strcmp(book2,book[i])&&strcmp(author2,author[i])))
			{temp=i;
			break;
			}
		}
	}
	void display()
	{
		if(temp!=0)
		{
			cout<<"\nRequested book is in Stock.";
			cout<<"\nEnter number of copy required\n";
			cin>>noofcopy;
			if(noofcopy>ncopy[temp])
			{
				cout<<"\nNot enough copy available!\n";
				return;
			}
			else
			{
				cout<<"\nTotal cost of "<<noofcopy<<" copy is : "<<noofcopy*cost[temp];
			}
		}
		else
		cout<<"\nRequested book is not available\n";
	}
};
int main()
{
	books ob1;
	ob1.get_data();
	ob1.display();
	getch();
	return 0;
}
