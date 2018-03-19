#include<stdio.h>
int series(int);
void main()
{
    int n;
    printf("Enter limit of the series\n");
    scanf("%d",&n);
    series(n);
}
int series(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
        sum=sum+(i*i);
        printf("Sum of given series for %d terms is %d",n,sum);
}

