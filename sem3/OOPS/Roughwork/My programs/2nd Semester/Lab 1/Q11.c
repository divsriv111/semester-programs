#include<stdio.h>
int srch(int *,int);
void main()
{
    int n,i,pop;
    printf("Enter size of array\n");
    scanf("%d",&n);
   int *p=malloc(sizeof(int)*n);
    printf("Enter %d elements \n",n);
    for(i=0;i<n;i++)
    scanf("%d",&p[i]);
    printf("Enter a no. plz \n");
    scanf("%d",&pop);
     for(i=0;i<n;i++)
    {
        if(p[i]==pop)
         {
                printf("\n%d is present in array at ar[%d]",pop,i);
                break;
         }
    }
}
