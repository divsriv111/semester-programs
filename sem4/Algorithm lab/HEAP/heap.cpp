#include<iostream>
#include<conio.h>
using namespace std;
int n;
void max_heapify(int *a,int i)
{
	int left,right,large,temp;
	left=(2*i)+1;
	right=(2*i)+2;
	if(left<=n && *(a+left)>*(a+i))
	large=left;
	else large=i;
	if(right<=n && *(a+right)>*(a+large))
	large=right;
	if(large!=i)
	{
		temp=*(a+i);
		*(a+i)=*(a+large);
		*(a+large)=temp;
		max_heapify(a,large);
	}
}
void build_heap(int *a)
{
	for(int i=n/2;i>=0;i--)
	max_heapify(a,i);
}
int main()
{
	int a[n];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<endl;
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	build_heap(a);
	cout<<endl;
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	getch();
}

