#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long n,sum=0;
	cout<<"ENTER BINARY NUMBER";
	cout<<endl;
	cin>>n;
	for(int i=0;n!=0;i++)
	{
		sum=sum+(n%10)*pow(2,i);
		n=n/10;
	}
	cout<<endl;
	cout<<sum;
	return 0;
}
