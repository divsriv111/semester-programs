#include<stdio.h>
void main()
{
    int i,j,n,temp;
    printf("Enter size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=1;i<n;i++)
    {
        j=i;
        while(j>0&&a[j]<a[j-1])
        {
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
    printf("Sorted Array is:-\n");
    for(i=0;i<n;i++)
        printf("%d   ",a[i]);
}

