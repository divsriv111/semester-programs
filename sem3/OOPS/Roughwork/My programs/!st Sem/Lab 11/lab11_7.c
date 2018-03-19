#include<stdio.h>
void main()
{
int n,i,p=0,s;
printf("Enter size of the array\n");
scanf("%d",&n);
int arr[n];
printf("\nEnter elements now\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
s=2*n-1;
int brr[n];
for(i=0;i<=s&&p<n;i++)
{
if(i%2==0)
{
brr[i]=arr[p];
p++;
}
else
brr[i]=0;
}
printf("\nModified Array\n");
for(i=0;i<s;i++)
printf("%d ",brr[i]);
}
