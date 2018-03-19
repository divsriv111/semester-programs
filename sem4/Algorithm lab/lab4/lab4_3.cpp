#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int max,x=0,y=0,sum,n=5,a[]={1,2,3,4,-5},temp;
	max=a[0]+a[1];
	for(int i=0;i<n-1;i++)
	{
	sum=a[i];
	for(int j=i+1;j<n;j++)
	{
		temp=sum;
		sum=+a[j];
		if(max!=sum && max <=sum)
		{
			max=sum;
			x=i;
			y=j;
		}
		else
		sum=temp;
	}
	}
	cout<<max<<" "<<x<<" "<<y;
	getch();
}



                                                        
