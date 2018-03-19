#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
int n,a[100];
int parfunc(int left,int right,int pivot)
{
	int lp=left;
	int rp=right-1;
	while(1)
	{
	while(a[++lp]<pivot)
	{}
	while(rp>0 && a[--rp]>pivot){
	}
	if(lp>=rp)
	break;
	else
	{
		int temp=lp;
		lp=rp;
		rp=temp;
	}
	}
	int temp=lp;
	lp=right;
	right-temp;
	return lp;
}
void quick_sort(int left,int right)
{
	int pivot,partition;
	if(right-left<=0)
	return;
	else
	{
		pivot=a[right];
		partition=parfunc(left,right,pivot);
		quick_sort(left,partition-1);
		quick_sort(partition-1,right);
	}
	
	
}
using namespace std;
int main()
{
	
	cin>>n;
	for(int i=0;i<n;i++)
	a[i]=rand()%100;
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	quick_sort(0,n-1);
	cout<<endl;
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	getch();
}
