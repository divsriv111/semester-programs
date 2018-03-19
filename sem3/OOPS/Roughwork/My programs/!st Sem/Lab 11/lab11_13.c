#include<stdio.h>
int n,i,j,r,c,a[5][5],b[5][5],k[5][5];
void add(int a[][5],int b[][5]);
void sub(int a[][5],int b[][5]);
void mul(int a[][5],int b[][5]);
void def();
void main()
{
    printf("Please enter size of rows and columns respectively\n");
    scanf("%d%d",&r,&c);
    a[r][c],b[r][c],k[r][c];
    printf("\nEnter %d elements for 1st Matrix\n",r*c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nNow enter same no.s of elements for 2nd Matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);
    }
    printf("\nEnter 1 to know addition of both the Marices\n");
    printf("\nEnter 2 to know substraction of both the Marices\n");
    printf("\nEnter 3 to know multiplication of both the Marices\n");
    printf("\nInput your choice\n");
    scanf("%d",&n);
    if(n==1)
        add(a,b);
    if(n==2)
        sub(a,b);
    if(n==3)
        mul(a,b);
    else
        def();
}
void add(int a[r][c],int b[r][c])
{
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            k[i][j]=a[i][j]+b[i][j];
    }
    printf("\nAddition of both the matrixes is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d     ",k[i][j]);
            printf("\n\n\n");
    }
}
void sub(int a[r][c],int b[r][c])
{
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]>b[i][j])
            k[i][j]=a[i][j]-b[i][j];
            else
            k[i][j]=b[i][j]-a[i][j];
        }
    }
    printf("\nDifference of both the matrixes is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d     ",k[i][j]);
            printf("\n\n\n");
    }
}
void mul(int a[r][c],int b[r][c])
{
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            k[i][j]=a[i][j]*b[i][j];
    }
    printf("\nProduct of both the matrixes is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d     ",k[i][j]);
            printf("\n\n\n");
    }
}
void def()
{
    printf("\nPlease enter a correct choice\n\n\n");
}
