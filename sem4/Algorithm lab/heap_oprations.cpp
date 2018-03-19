#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<ctime>
using namespace std;
void max_heapify(int a[],int i,int n)
{
	int left,right,large,temp;
	left=2*i+1;
	right=2*i+2;
	if(left<n && a[i]<a[left])
	large = left;
	else large=i;
	if(right<n && a[large]<a[right])
	large=right;
	if(large!=i)
	{
		temp=a[large];
		a[large]=a[i];
		a[i]=temp;
		max_heapify(a,large,n);
	}
}
void build_max_heap(int a[],int n)
{
	for(int i=n/2;i>=0;i--)
	max_heapify(a,i,n);
}
void min_heapify(int a[],int i,int n)
{
	int left,right,small,temp;
	left=2*i+1;
	right=2*i+2;
	if(left<n && a[i]>a[left])
	small = left;
	else small=i;
	if(right<n && a[small]>a[right])
	small=right;
	if(small!=i)
	{
		temp=a[small];
		a[small]=a[i];
		a[i]=temp;
		max_heapify(a,small,n);
	}
}
void build_min_heap(int a[],int n)
{
	for(int i=n/2;i>=0;i--)
	min_heapify(a,i,n);
}
void print_heap(int a[],int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
void heap_sort_a(int a[],int n)
{
	build_max_heap(a,n);
	for(int i=n;i>=0;i--)
	{
		int temp=a[0];
		a[0]=a[n-1];
		a[n-1]=temp;
		n--;
		build_max_heap(a,n);
	}
}
void heap_sort_b(int a[],int n)
{
	build_min_heap(a,n);
	for(int i=n;i>=0;i--)
	{
		int temp=a[0];
		a[0]=a[n-1];
		a[n-1]=temp;
		n--;
		build_min_heap(a,n);
	}
}
void heap_insert(int a[],int n,int key)
{
	a[n]=key;
	build_max_heap(a,n+1);
}
void heap_incease(int a[],int n)
{
	int old;
	cout<<"\nenter old key\n";
	cin>>old;
	for(int i=0;i<n;i++)
	{
		if(a[i]==old)
		{
			cout<<"\nenter new value of "<<old<<endl;
			cin>>a[i];
		}
		if(i==n-1 && a[i]!=old)
		{
		cout<<"\nentered Key not found!!";
		return;
		}
	}
}
int main()
{
	int n,a[100],ch,key;
	cout<<"Enter value of n\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
	a[i]=rand()%100;
	cout<<a[i]<<" ";
	}
	while(1){
	cout<<"\nEnter choice\n1)build max-heapify\n2)build min-heapify\n3)heap_sort in accending\n4)heap_sort in decending order\n5)heap insert\n6)heap increase key\n7)print heap\n8)exit\n";
	cin>>ch;
	if(ch==8)
	break;
	switch(ch)
		{
			case 1:
				build_max_heap(a,n);
				break;
			case 2:
				build_min_heap(a,n);
				break;
			case 3:
				heap_sort_a(a,n);
				break;
			case 4:
				heap_sort_b(a,n);
				break;
			case 5:
				cout<<"\nEnter key?\n";
				cin>>key;
				heap_insert(a,n,key);
				break;
			case 6:
				heap_incease(a,n);
				break;
			case 7:
				print_heap(a,n);
				break;
			default:
				cout<<"\nInvalid choice\n";
				break;
		}
		}
	getch();
}
