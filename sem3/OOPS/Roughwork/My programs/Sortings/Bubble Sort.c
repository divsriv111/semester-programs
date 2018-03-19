#include<stdio.h>
void main()
{
    int i,j,n,k,temp;
printf("Enter size of the array\n");
scanf("%d",&n);
int a[n];
printf("Now enter %d elements\n",n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);

for(i=0;i<n-1;i++)
{
    for(j=0;j<n-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    printf("\n\nArray after i= %d\n",i);
    for(k=0;k<n;k++)
        printf("%d   ",a[k]);
}
printf("\nFinally Sorted Array -\n");
for(i=0;i<n;i++)
    printf("%d   ",a[i]);
}
