#include<stdio.h>
void main()
{
    int r,c,i,j;
 printf("Enter size row and coloumns of array respectively\n");
 scanf("%d%d",&r,&c);
 int a[r][c];
 printf("\nEnter elements now\n");
 for(i=0;i<r;i++)
 {
     for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
 }
 printf("\nYour desired matrix is\n");
 for(i=0;i<r;i++)
 {
     for(j=0;j<c;j++)
        printf("%d    ",a[i][j]);
     printf("\n");
 }
}
