#include<iostream>
int main()
{
	using namespace std;
	int n,flag=0;
	cout<<"Enter the numebr\n";
	cin>>n;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
		flag=1;
		cout<<"NOT PRIME";
		break;
		}
	}
	if(flag==0)
	{
	cout<<endl;
	cout<<"PRIME";
	}
	return 0;
}
