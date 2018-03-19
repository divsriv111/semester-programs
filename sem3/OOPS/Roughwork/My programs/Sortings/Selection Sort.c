#include<stdio.h>
void main()
{
int i,j,temp,pos,n;
printf("Enter size of the array\n");
scanf("%d",&n);
int a[n];
printf("Now enter %d elements\n",n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
    pos=i;
    for(j=i+1;j<n;j++)
    {
          if(a[pos]>a[j])
            pos=j;
    }
    if(pos!=i)
    {
        temp=a[i];
        a[i]=a[pos];
        a[pos]=temp;
    }
}
for(i=0;i<n;i++)
    printf("%d    ",a[i]);
}
