#include<stdio.h>
#include<conio.h>
int biggest(int n,int arr[])
{
	 static int max=arr[0];
	 static int i=0;
	
	 if(i<n)
	 {
			if(arr[i]>max)
			max=arr[i];
			i++;
			biggest(n,arr);
			}
			else
			return max;
}
int main()
{
	int m,n,i,arr[100];
	printf("input number of elements");
	scanf("%d",&n);
	printf("input array elements");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	m=biggest(n,arr);
	printf("largest number of array is %d",m);
	getch();
	return 0;
}
