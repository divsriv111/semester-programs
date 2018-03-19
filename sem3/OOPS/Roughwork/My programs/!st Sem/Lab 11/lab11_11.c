#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,r,c,k=0;
    printf("Please enter equal size of rows and colomns respectively\n");
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c];
    printf("Now please enter %d elements\n",r*c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        b[j][i]=a[i][j];
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==b[i][j])
                k++;
            else
            {
                printf("\n\nMatrix is not symmetric\n");
                exit(0);
            }
        }
    }
    if(k==r*c)
    printf("Matrix is symmetric");
}
