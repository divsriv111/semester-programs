#include<stdio.h>
void main()
{
    int i,j,r,c;
    printf("Plz enter size of rows and coloumns respectively\n");
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c];
    printf("\nPlz enter %d elements\n",r*c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nOriginal array\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d    ",a[i][j]);
        printf("\n\n\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            b[j][i]=a[i][j];
    }
    printf("\nTransposed array\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d    ",b[i][j]);
        printf("\n\n\n");
    }
}
