#include<iostream>
#define MAX 5
int main()
{
	using namespace std;
	int i,j,k;
	for(i=1;i<=MAX;i++)
	{
		for(k=MAX-i;k>=0;k--)
		cout<<" ";
		
		for(j=1;j<=i;j++)
		{
			cout<<j;
			cout<<" ";
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}
