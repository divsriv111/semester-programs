#include<stdio.h>
int fibo(int);
void main()
{
    int n;
    printf("Enter limit of series\n");
    scanf("%d",&n);
    fibo(n);
}
int fibo(int n)
{
    int i;
    int x=1,y=0,sum=0;
    printf("%d  %d  ",y,x);
    for(i=0;i<=n;i++)
    {
    sum=x+y;
    y=x;
    x=sum;
    printf("%d  ",sum);
    }
}
