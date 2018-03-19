#include<iostream>
#include<conio.h>
using namespace std;
void minmax( int array[], int n, int *min, int *max)
{
	int c,d,swap;
	for(c=0;c<(n-1);c++)
  	{
    	for(d=0;d<n-c-1;d++)
    {
     	 if(array[d]>array[d+1])
      	{
        swap=array[d];
        array[d]=array[d+1];
        array[d+1]=swap;
      	}
    }
   }
   *min=array[0];
   *max=array[n-1];
}
int main()
{
	int array[50],n,min,max;
	cout<<"\nEnter size of array\n";
	cin>>n;
	cout<<"\nEnter array elements\n";
	for(int i=0;i<n;i++)
	cin>>array[i];
	minmax(array,n,&min,&max);
	cout<<"\nMininum = "<<min<<"\nMaximum = "<<max;
	getch();
	return 0;
}
