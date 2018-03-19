#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
void counting(int a[],int n,int large)
{
	int c[large],b[100];
	for(int i=0;i<=large;i++)
	c[i]=0;
	for(int i=0;i<n;i++)
	c[a[i]]++;
	for(int i=1;i<=large;i++)
	c[i]=c[i]+c[i-1];
	for(int i=n-1;i>=0;i--)
	{
		b[c[a[i]]]=a[i];
		c[a[i]]--;
	}
	for(int i=0;i<n;i++)
	cout<<b[i]<<" ";
}
int main()
{
	int n,a[100],large;
	cin>>n;
	for(int i=0;i<n;i++)
	a[i]=rand()%100;
	cout<<endl;
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<"\nLargest?\n";
	cin>>large;
	counting(a,n,large);
	getch();
}
