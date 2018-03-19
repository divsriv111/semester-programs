#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<cmath>
using namespace std;
int B[100][3],n;
int getMax(int arr[][3],int digit)
{
    int max = arr[0][digit];
    for (int i = 1; i < n; i++)
        if (arr[i][digit] > max)
            max = arr[i][digit];
    return max;
}
void counting_sort(int A[][3],int digit, int k)
{
    int i, j,C[k];
    for (i = 0; i <= k; i++)
        C[i] = 0;
    for (j = 1; j <= n; j++)
        C[A[j][digit]] = C[A[j][digit]] + 1;
    for (i = 1; i <= k; i++)
        C[i] = C[i] + C[i-1];
    for (j = n; j >= 1; j--)
    {
        B[C[A[j][digit]]][digit] = A[j][digit];
        C[A[j][digit]] = C[A[j][digit]] - 1;
    }
    
}
void radixsort(int arr[][3], int digit)
{
    for (int i = digit-1;i>=0; i--)
        counting_sort(arr, i, getMax(arr,digit));
}
int main()
{
    int n, k = 0, A[100][3], i,digit;
    cout<<"Enter length of array\n";
	cin>>n;
	cout<<"Enter length of each digit\n";
	cin>>digit;
    for (i = 1;i<=n;i++)
    {
        A[i][0]=rand()%100+pow(10,digit-1);
        if (A[i][0] > k) {
            k = A[i][0];
        }
    }
    cout<<"\nArray is :\n";
    for (i = 1; i < n; i++)
    cout<<A[i][0]<<" ";
    radixsort(A,digit);
    //for(int i=digit-1;i>=0;i--)
    //counting_sort(A,digit, k);
    cout<<endl;
    cout<<"The Sorted array is : \n";
    for (i = 1; i < n; i++)
        cout<<B[i][0]<<" ";
    getch();
    return 0;
}
