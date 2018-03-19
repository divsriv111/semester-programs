#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[100],r,sum=0,j,i,k=0,n,max=0;
	cout<<"how many numbers you want to enter?";
	cin>>n;
	for(i=0;i<n;i++)
	  {
	    cin>>arr[i];
	    if(max<arr[i])
		max=arr[i];
	 }
	 r=n/2;
	 for(i=0;i<=max;i++)
	 {
		for(j=0;j<n;j++)
		{
			if(arr[j]==i)
			 {
	     		k=k+1;
		     }
		    if(n%2==1)
		    {
		      if(k==(r+1))
		       { cout<<i; getch(); return 0;}
			}
			if(n%2==0)
			 {
			  if(k==r || k==(r-1))
			   sum=sum+i;
			 }
		}
     }
     if(n%2==0)
      cout<<sum/2;
      getch();
      return 0;
}
