#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,k=0,n;
    printf("Please enter size of the matrix\n");
    scanf("%d",&n);
    printf("Now please enter %d elements\n",n*n);
    int a[n][n],b[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            b[i][j]=0;
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          b[k][k]=b[k][k]+a[i][j];
        }
        k++;
    }
    printf("\nInputted Matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d    ",a[i][j]);
        printf("\n\n\n");
    }
    printf("\nModified Matrix\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d    ",b[i][j]);
        printf("\n\n\n");
    }
}

