#include<stdio.h>
int n;
int lea(int *,int);

int main()
{
    int i,pop;
    printf("Enter Size of the array\n");
    scanf("%d",&n);
    int ar[n];
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    pop=lea(&ar[0],n);
    printf("\nLargest element in array is:%d",pop);
    return 0;
}
int lea(int *p,int h)
{
    int i,k=0;
    for(i=0;i<h;i++)
    {
        if(k < p[i])
            k=p[i];
    }
    return k;
}
