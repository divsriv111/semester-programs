#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,temp;
	int l=0;
	cout<<"Enter i\n";
	cin>>i;
	temp=i;
	cout<<"\nEnter j\n";
	cin>>j;
	for(int x=1;;x++)
	{
		l++;
		i+=x;
		if(i%j==0)
		break;
	}
	cout<<endl<<temp<<" rounded off to "<<i<<" by "<<l+1;
	getch();
	return 0;
}
