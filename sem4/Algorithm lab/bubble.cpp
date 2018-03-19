#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;
void bubble(int a[],int n)
{
}
int main()
{
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	a[i]=rand()%100;
	for(int i=0;i<n;i++)
	for(int j=0;j<n-1;j++)
	{
		if(a[j]>a[j+1])
		{
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	getch();
	
}
