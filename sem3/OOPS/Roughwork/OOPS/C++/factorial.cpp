#include<iostream>
int main()
{
	using namespace std;
	int i=1,n,fact=1;
	cout<<"ENTR A NUMBER\n";
	cin>>n;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	cout<<"Factorial is= ";
	cout<<fact;
	cout<<endl;
	system("pause");
	return 0;
}
