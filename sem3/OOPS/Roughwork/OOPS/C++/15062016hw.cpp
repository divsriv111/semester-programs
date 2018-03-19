#include<iostream>
int main()
{
	using namespace std;
	int a[11][11],b[11][11],k=1,flag=0;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			a[i][j]=k;
			k++;
		}
	}
	
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	b[0][1]=NULL;
	b[10][0]=NULL;
	b[0][1]=NULL;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<2;j++)
		{
		cout<<b[i][j];
		cout<<" ";
		}
		cout<<endl;
		if(flag==1)
		break;
	}
	return 0;
}
