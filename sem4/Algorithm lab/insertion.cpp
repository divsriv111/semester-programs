#include<iostream>
#include<conio.h>
using namespace std;
void insertion(int a[],int n)
{
	int i,j,key;
	for(j=1;j<n;j++)
	{
		i=j-1;
		key=a[j];
		while(i>=0 && key<a[i])
		{
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=key;
	}
}
int main()
{
	int n,a[n];
	cin>>n;
	cout<<"\nEnter elements\n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	insertion(a,n);
	cout<<endl;
	for(int i=0;i<n;i++)
	cout<<" "<<a[i];
	getch();
}
