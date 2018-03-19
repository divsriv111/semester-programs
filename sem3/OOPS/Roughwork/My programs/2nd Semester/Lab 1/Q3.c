#include<stdio.h>
int srch(int [],int,int);
void main()
{
 int n,i,pop;
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    int ar[n];
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    printf("Enter no.to be searched\n");
    scanf("%d",&pop);
    srch(ar,n,pop);
}
int srch(int ar[],int n,int pop)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(ar[i]==pop)
         {
                printf("%d is present in array at ar[%d]",pop,i);
                break;
         }
    }
}
