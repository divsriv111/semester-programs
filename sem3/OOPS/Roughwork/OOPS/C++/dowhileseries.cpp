#include<iostream>
int main()
{
	using namespace std;
	int i=1;
	do
	{
		if(i%2==0)
		{
			cout<<i*i*i;
			cout<<endl;
		}
		else{
			cout<<i*i;
			cout<<endl;
		}
		i++;
	}while(i<=10);
	system("pause");
	return 0;
}
