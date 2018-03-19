#include<stdio.h>
void main()
{
    int n,i,m,p=0;
    printf("Enter size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("\n Enter elements now\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    m=2*n-1;
    int brr[m];
    for(i=0;i<=m&&p<n;i++)
    {
        if(i%2==0)
        {
            brr[i]=arr[p];
            p++;
        }
        else
            brr[i]=arr[p]-arr[p-1];
    }
    printf("\nModified Array");
    for(i=0;i<m;i++)
        printf("%d ",brr[i]);
}
