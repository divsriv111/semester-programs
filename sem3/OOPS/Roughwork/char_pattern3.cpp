#include<iostream>
using namespace std;
int main()
{
	int n,x,y;
	cin>>n;
	for(int temp=0;temp<n;temp++)
	{
		cin>>x>>y;
		for(int i=1;i<=x;i++)
		{
			for(int j=0;j<y;j++)
			{
				if(i==1||i==x||4%i==0)
				cout<<"*";
				if(i!=0&&i!=x-1&&4%i!=0)
				{
					if(j%3==0)
					cout<<"*";
					else cout<<".";
					//if(j>0&&j<y-1)
					//cout<<".";
					//if(j==0||j==y-1)
					//cout<<"*";
				}
			}
			cout<<endl;
		}
	}
}
