#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
	char a[200];
	int n,k,l;
	cin>>n;
	for(int j=0;j<n;j++)
	{
		cin>>a;
		l=strlen(a)/2;
		for(int i=0;i<=l;i++&&i<=l)
		{
			if(i>=l)
			break;
			cout<<a[i++];
		}
		cout<<endl;
	}
	getch();
	return 0;
}
