#include<stdio.h>
int ascend(int *,int)
int descend(int *,int)
void main()
{
    int n,i;
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter %d elements\n");
    int ar[n];
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    printf("Enter 1 to print array in ascending order\n");
    printf("Enter 2 to print array in ascending order\n");
    scanf("%d",&a);
    if(a==1)
        ascend(&ar[0],n);
    if(a==2)
        descend(&ar[0],n);
    else
        printf("Wrong Input");
}
int ascend(int *p,int n)
{

