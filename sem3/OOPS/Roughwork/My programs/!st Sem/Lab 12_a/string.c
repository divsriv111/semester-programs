#include<stdio.h>
void main()
{
    int i,j,r,c;
    printf("Enter size of rows and colomns respectively\n");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    printf("Mr. chutiye plz enter elements now\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&arr[i][j]);
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d",arr[i][j]);
    printf("\n");
    }
}
