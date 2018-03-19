#include<stdio.h>
int concat(int *,int *,int,int);
void main()
{
    int i;
    int ar1[20],ar2[20],a,b;
    printf("Enter size of 1st array\n");
    scanf("%d",&a);
    printf("Enter %d elements\n",a);
    for(i=0;i<a;i++)
    scanf("%d",&ar1[i]);
    printf("Enter size of 2nd array\n");
    scanf("%d",&b);
    printf("Enter %d elements\n",b);
    for(i=0;i<b;i++)
    scanf("%d",&ar2[i]);
    ar1[a+b],ar2[b];
    concat(&ar1[0],&ar2[0],a,b);
}
int concat(int *p,int *r,int a,int b)
{
    int i;
    for(i=0;i<b;i++)
    {
        p[i+a]=r[i];
    }
    printf("Concateneted Array is -\n");
    for(i=0;i<(a+b);i++)
    printf("%d  ",p[i]);
}

