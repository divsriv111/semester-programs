#include<iostream>
using namespace std;
int main()
{
	int a,test;
	long m,n;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>m>>n;
		if(m==1)
		m=2;
		if(n==2)
		n=2;
		for(long j=m;j<=n;j++)
		{
			test=0;
			for(long l=2;l<j;l++)
			if(j%l==0)
			{
				test=1;
				break;
			}
			if(test==0)
			cout<<j<<endl;
		}
	}
	return 0;
}
