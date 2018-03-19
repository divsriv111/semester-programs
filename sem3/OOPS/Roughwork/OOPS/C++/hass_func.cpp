#include<iostream>
#include<conio.h>
#define MAX 10 
using namespace std;
int a[MAX],index,m;
int allfull()
{
	int l=0;
	int temp=0;
	while(temp!=m-1)
	{
		if(a[temp]!=0)
		l++;
		temp++;
	}
	if(l==m-1)
	return 1;
	else return 0;
}
void display()
{
	cout<<"\nIndex     :\t";
	for(int i=0;i<m;i++)
	cout<<i<<"\t";
	cout<<endl<<"Number (n):\t";
	for(int i=0;i<m;i++)
	cout<<a[i]<<"\t";
	cout<<endl;
}
int main()
{
	int n;
	cout<<"Enter modulo m\n";
	cin>>m;
	while(1)
	{
		cout<<"\nEnter data?\n";
		cin>>n;
		index=n%m;
		if(allfull())
		{
			cout<<"\nMemory allocation failed, memory full\n";
			break;
		}
		if(a[index]==0)
		a[index]=n;
		else if(a[index]!=0)
		{
			while(a[index]!=0)
			{
				++index;
				if(a[index]==0)
				a[index]=n;
				if(index==m-1)
				index=0;
			}
		}
		display();
	}
	getch();
	return 0;
}
