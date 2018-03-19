#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
int counting_sort(int a[],int n,int k)
{
	int c[k+1],b[100];
	for(int i=0;i<=k;i++)
	c[i]=0;
	//cout<<"working here\n";
	for(int i=0;i<n;i++)
	c[a[i]]++;
	//cout<<"working here\n";
	for(int i=1;i<=k;i++)
	c[i]=c[i]+c[i-1];
	//cout<<"working here\n";
	for(int i=n-1;i>=0;i--)
	{
	b[c[a[i]]]=a[i];
	c[a[i]]--;
	//cout<<"working here\n";
	}
	cout<<endl;
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
	cin>>large;
	counting_sort(a,n,large);
	getch();
}
