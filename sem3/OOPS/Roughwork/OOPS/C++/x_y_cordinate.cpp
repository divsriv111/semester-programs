#include<iostream>
#include<conio.h>
#define MAX 14
using namespace std;
int a[MAX],b[MAX];
int main()
{
	int x,y;
	cout<<"Enter coordinates (x,y)\n";
	cin>>x>>y;
	for(int i=0;i<=MAX;i++)
	{
		for(int j=0;j<=MAX;j++)
		{
			if(i!=7)
			{
				if(j==5)
				cout<<7-i;
				if(j==7)
				cout<<".";
				else cout<<"";
			}
			if(i==7)
			{
				if(j!=7)
				cout<<". ";
			}
			if(i==8)
			{
				if(j!=7&&j<7)
				cout<<-(7-j);
				if(j==7)
				cout<<0<<" ";
				if(j!=7&&j>7)
				cout<<j-7;
			}
		}
		cout<<endl;
	}
	
	getch();
	return 0;
}
