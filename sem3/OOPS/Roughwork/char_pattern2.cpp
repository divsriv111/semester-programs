#include<iostream>
using namespace std;
int main()
{
	int n,x,y;
	cin>>n;
	for(int temp=0;temp<n;temp++)
	{
		cin>>x>>y;
		for(int i=0;i<x;i++)
		{
			for(int j=0;j<y;j++)
			{
				if(i==0||i==x-1)
				cout<<"*";
				if(i!=0&&i!=x-1)
				{
					if(j>0&&j<y-1)
					cout<<".";
					if(j==0||j==y-1)
					cout<<"*";
				}
			}
			cout<<endl;
		}
	}
}
