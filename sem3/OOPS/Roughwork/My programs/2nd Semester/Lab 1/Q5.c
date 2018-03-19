#include<stdio.h>
int power(int,int);
void main()
{
    int x,y;
    printf("Enter no. and its power respectively\n");
    scanf("%d%d",&x,&y);
    power(x,y);
}
int power(int x,int y)
{
    int ans=1;
    while(y>=1)
    {
        ans=ans*x;
        y--;
    }
    printf("Answer is %d",ans);
}

