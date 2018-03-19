#include<iostream>
#define MAX 10
int main()
{
	using namespace std;
	int n,i;
	cout<<"input a number";
	cout<<endl;
	cin>>n;
	cout<<endl;
	for(i=1;i<=MAX;i++)
	cout<<n*i<<endl;
	system("pause");
	return 0;
}
