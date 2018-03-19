#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
void counting_sort(int a[],int b[],int n,int k)
{
	int c[k];
	for(int i=0;i<k;i++)
	c[i]=0;
	for(int i=0;i<n;i++)
	c[a[i]]++;
	for(int i=1;i<k;i++)
	c[i]=c[i]+c[i-1];
	for(int i=n-1;i>=0;i--)
	{
		b[c[a[i]]]=a[i];
		c[a[i]]--;
	}
	cout<<"\nafter counting sort elements are\n";
	for(int i=0;i<n;i++)
	cout<<b[i]<<" ";
}
int main()
{
	int n,k=0,i;
	cout<<"Enter number of elements\n";
	cin>>n;
	int a[n],b[n];
	cout<<"Enter elements\n";
	for(i=0;i<n;i++)
	{a[i]=rand()%100;
	if(k<a[i])
	k=a[i];}
	cout<<"\nelements are\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	counting_sort(a,b,n,k+1);
	getch();
	return 0;
}
