#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<time.h>
void quick_sort(int *a,int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}
 
int partition(int *a,int l,int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;
    
    do
    {
        do
            i++;
            
        while(a[i]<v&&i<=u);
        
        do
            j--;
        while(v<a[j]);
        
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
    
    a[l]=a[j];
    a[j]=v;
    
    return(j);
}

int main()
{
    int n,i;
    clock_t start,end;
    printf("How many elements?");
    scanf("%d",&n);
    start = clock();
    int *p=(int*) malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        *(p+i)=rand();    
    quick_sort(p,0,n-1);
    printf("\nArray after sorting:\n");
    for(i=0;i<n;i++)
        printf("%d ", *(p+i));
    end = clock();
 	printf("\n\nThe time for the event was: %f",((double)(end-start)/CLK_TCK));
 	free(p);
 	getch();
    return 0;        
}
