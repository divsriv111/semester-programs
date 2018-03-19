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
				if(i%2!=0)
				{
					if(j%2!=0)
					cout<<"*";
					else cout<<".";
					
				}
				else
				{
					if(j%2!=0)
					cout<<".";
					else cout<<"*";
				}
			}
			cout<<endl;
		}
	}
}
